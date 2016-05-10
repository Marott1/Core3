world_boss_dantooine = Creature:new {
	customName = "Fizeh Maktah (Dantooine World Boss)",
	socialGroup = "self",
	faction = "",
	level = 500,
	chanceHit = 30,
	damageMin = 645,
	damageMax = 1500,
	baseXp = 55000,
	baseHAM = 1106000,
	baseHAMmax = 1352000,
	armor = 3,
	resists = {95,95,95,95,95,95,95,95,-1},
	meatType = "",
	meatAmount = 0,
	hideType = "",
	hideAmount = 0,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0,
	ferocity = 0,
	pvpBitmask = AGGRESSIVE + ATTACKABLE + ENEMY,
	creatureBitmask = PACK + HERD + KILLER,
	optionsBitmask = AIENABLED,
	diet = HERBIVORE,

	templates = {
		"object/mobile/dressed_dark_jedi_human_male_01.iff",
		"object/mobile/dressed_dark_jedi_human_female_01.iff"},
	lootGroups = {
				{group = "holocron_dark", chance = 5000000},
				{group = "holocron_light", chance = 5000000},
				{group = "crystals_premium", chance = 5000000},
				{group = "pearls_flawless", chance = 5000000},
				{group = "rifles", chance = 1500000},
				{group = "pistols", chance = 1500000},
				{group = "melee_weapons", chance = 1500000},
				{group = "armor_attachments", chance = 10000000},
				{group = "clothing_attachments", chance = 10000000},
				{group = "carbines", chance = 1500000},
				{group = "dark_jedi_common", chance = 800000},
				{group = "crystals_ancient", chance = 100000}
				},
	weapons = {"dark_jedi_weapons_gen4"},
	conversationTemplate = "",
	attacks = merge(lightsabermaster,forcepowermaster)
}

CreatureTemplates:addCreatureTemplate(world_boss_dantooine, "world_boss_dantooine")
