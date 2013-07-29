/*
 *	server/zone/objects/tangible/component/genetic/GeneticComponent.h generated by engine3 IDL compiler 0.60
 */

#ifndef GENETICCOMPONENT_H_
#define GENETICCOMPONENT_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace objects {
namespace scene {

class SceneObject;

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace templates {
namespace mobile {

class CreatureTemplate;

} // namespace mobile
} // namespace templates
} // namespace zone
} // namespace server

using namespace server::zone::templates::mobile;

#include "server/zone/objects/manufactureschematic/craftingvalues/CraftingValues.h"

#include "server/zone/objects/tangible/component/Component.h"

#include "engine/lua/LuaObject.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace component {
namespace genetic {

class GeneticComponent : public Component {
public:
	GeneticComponent();

	void setStats(unsigned int cle, unsigned int end, unsigned int fie, unsigned int pow, unsigned int ite, unsigned int cou, unsigned int dep, unsigned int dex, unsigned int frt, unsigned int har);

	void setCleverness(unsigned int value);

	void setEndurance(unsigned int value);

	void setFierceness(unsigned int value);

	void setPower(unsigned int value);

	void setIntellect(unsigned int value);

	void setCourage(unsigned int value);

	void setDependency(unsigned int value);

	void setDexterity(unsigned int value);

	void setFortitude(unsigned int value);

	void setHardiness(unsigned int value);

	void setEnergy(float value);

	void setBlast(float value);

	void setCold(float value);

	void setHeat(float value);

	void setElectric(float value);

	void setAcid(float value);

	void setStun(float value);

	void setSaber(float value);

	void setArmorRating(int rating);

	void setKinetic(float value);

	void setSpecialAttackOne(const String& atk);

	void setSpecialAttackTwo(const String& atk);

	void setRanged(bool b);

	void setQuality(int qual);

	void initializeTransientMembers();

	void updateCraftingValues(CraftingValues* values, bool firstUpdate);

	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	String convertSpecialAttack(String& attackName);

	String resistValue(float input);

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	GeneticComponent(DummyConstructorParameter* param);

	virtual ~GeneticComponent();

	friend class GeneticComponentHelper;
};

} // namespace genetic
} // namespace component
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::component::genetic;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace component {
namespace genetic {

class GeneticComponentImplementation : public ComponentImplementation {
protected:
	unsigned int cleverness;

	unsigned int endurance;

	unsigned int fierceness;

	unsigned int power;

	unsigned int intelligence;

	unsigned int courage;

	unsigned int dependency;

	unsigned int dexterity;

	unsigned int fortitude;

	unsigned int hardiness;

	String special1;

	String special2;

	bool ranged;

	int quality;

	int armorRating;

	float kinResist;

	float energyResist;

	float blastResist;

	float coldResist;

	float heatResist;

	float elecResist;

	float acidResist;

	float stunResist;

	float saberResist;

public:
	GeneticComponentImplementation();

	GeneticComponentImplementation(DummyConstructorParameter* param);

	void setStats(unsigned int cle, unsigned int end, unsigned int fie, unsigned int pow, unsigned int ite, unsigned int cou, unsigned int dep, unsigned int dex, unsigned int frt, unsigned int har);

	void setCleverness(unsigned int value);

	void setEndurance(unsigned int value);

	void setFierceness(unsigned int value);

	void setPower(unsigned int value);

	void setIntellect(unsigned int value);

	void setCourage(unsigned int value);

	void setDependency(unsigned int value);

	void setDexterity(unsigned int value);

	void setFortitude(unsigned int value);

	void setHardiness(unsigned int value);

	void setEnergy(float value);

	void setBlast(float value);

	void setCold(float value);

	void setHeat(float value);

	void setElectric(float value);

	void setAcid(float value);

	void setStun(float value);

	void setSaber(float value);

	void setArmorRating(int rating);

	void setKinetic(float value);

	void setSpecialAttackOne(const String& atk);

	void setSpecialAttackTwo(const String& atk);

	void setRanged(bool b);

	void setQuality(int qual);

	void initializeTransientMembers();

	void updateCraftingValues(CraftingValues* values, bool firstUpdate);

	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	String convertSpecialAttack(String& attackName);

	String resistValue(float input);

	WeakReference<GeneticComponent*> _this;

	operator const GeneticComponent*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~GeneticComponentImplementation();

	void finalize();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);

	friend class GeneticComponent;
};

class GeneticComponentAdapter : public ComponentAdapter {
public:
	GeneticComponentAdapter(GeneticComponent* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void setStats(unsigned int cle, unsigned int end, unsigned int fie, unsigned int pow, unsigned int ite, unsigned int cou, unsigned int dep, unsigned int dex, unsigned int frt, unsigned int har);

	void setCleverness(unsigned int value);

	void setEndurance(unsigned int value);

	void setFierceness(unsigned int value);

	void setPower(unsigned int value);

	void setIntellect(unsigned int value);

	void setCourage(unsigned int value);

	void setDependency(unsigned int value);

	void setDexterity(unsigned int value);

	void setFortitude(unsigned int value);

	void setHardiness(unsigned int value);

	void setEnergy(float value);

	void setBlast(float value);

	void setCold(float value);

	void setHeat(float value);

	void setElectric(float value);

	void setAcid(float value);

	void setStun(float value);

	void setSaber(float value);

	void setArmorRating(int rating);

	void setKinetic(float value);

	void setSpecialAttackOne(const String& atk);

	void setSpecialAttackTwo(const String& atk);

	void setRanged(bool b);

	void setQuality(int qual);

	void initializeTransientMembers();

	String convertSpecialAttack(String& attackName);

	String resistValue(float input);

};

class GeneticComponentHelper : public DistributedObjectClassHelper, public Singleton<GeneticComponentHelper> {
	static GeneticComponentHelper* staticInitializer;

public:
	GeneticComponentHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<GeneticComponentHelper>;
};

} // namespace genetic
} // namespace component
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::component::genetic;

#endif /*GENETICCOMPONENT_H_*/
