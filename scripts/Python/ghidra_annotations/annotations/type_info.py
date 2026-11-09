import re

from ghidra_annotations.util import (
    clean_data, extract_string_value, is_string_data_type_obj, log_info, log_warning, save_json_file)
from watcom_type_info import LIBRARY_CLASSES, type_name as game_type_name

class StructSizeMismatchError(Exception):
    """A Ghidra struct size disagrees with the Watcom RTTI instance_size."""
    pass

def normalize_class_name(class_name):
    typo_map = {
        "fileManager": "CDemonFileManager",
        "fileManger": "CDemonFileManager",
        "paletteManager": "CDemonPaletteManager",
        "CMotionControler": "CMotionController",
        "CDR": "CDemonRenderer",
        "SCScipt": "CScript"
    }
    return typo_map.get(class_name, class_name)

def get_class_hierarchy():
    return {
        "CDemonActor": [
            "CWeapon", "CWaterActor", "CCryptVessel", "CVehicle", "CTrigger",
            "CTrash", "CTrap", "CTeleportDest", "CTeleport", "CStairs", "CSpike",
            "CSimBox", "CPlatform", "CPendulum", "CMarquee", "CMansionPuzzleCircle",
            "CMirrorHack", "CLightCone", "CLever", "CLadder", "CKeyActor",
            "CHeroPlaceholder", "CHealthItem", "CGrave", "CGlass", "CGasMask",
            "CFrankenstienMachine", "CFlies", "CFlameCan", "CFlame", "CFilmReel",
            "CEmitter", "CDrip", "CDoor", "CActorDestination", "CCurtain",
            "CCrate", "CChain", "CCharacter", "CBoxActor", "CBodyPart", "CBattery",
            "CBat", "CBarrier", "CBackgroundActor", "CAnvil", "CAmmoBox", "CAmmo"
        ],
        "CWeapon": [
            "CTurret", "CTommyGun", "CShovel", "CShotgun", "CMelee", "CLightGun",
            "CGun", "CFlashlight", "CFlameThrower", "CElephantGun", "CDynamite",
            "CCrossbow", "CBaronWeapon"
        ],
        "CTrigger": ["CWayPoint"],
        "CPlatform": ["CMineCar", "CConveyor"],
        "CActorDestination": ["CFilmProjector"],
        "CCharacter": ["CNPC", "CHero", "CEnemy"],
        "CNPC": [
            "CBassPlayer", "CDrummer", "CPassenger", "CHighPriestOfGardath",
            "CHostage", "CHiram"
        ],
        "CHero": [
            "CSvetlana", "CStranger", "CScat", "CMoloch", "CIcePick", "CHaystack",
            "CGabriella", "CColonel", "CBaron"
        ],
        "CEnemy": [
            "CZombie", "CWerewolf", "CVampireBoss", "CTVBat", "CTentacle", "CSuccubus",
            "CSmiley", "CSentinel", "CMobster", "CMimic", "CLarva", "CImp",
            "CHotDemon", "CGhoul", "CGargoyle", "CDrone", "CDraculaBride",
            "CZombieDog", "CZombieCow", "CBugs", "CBride", "CBoneGuy", "CBiggs",
            "CBeast", "CBatman", "CBatCreature", "CArmour"
        ],
        "CBoxActor": ["CTempleStone", "CLightActor"]
    }

def get_class_files():
    return {
        "C3DSCamera": "..\\core\\setutil.cpp",
        "C3DSLight": "..\\core\\setutil.cpp",
        "CActorDestination": "..\\core\\dest.cpp",
        "CAlphaBitmap": "..\\engine\\alphabit.cpp",
        "CAmmo": "..\\core\\ammo.cpp",
        "CAmmoBox": "..\\core\\ammobox.cpp",
        "CAnvil": "..\\core\\anvil.cpp",
        "CArmour": "..\\core\\armour.cpp",
        "CBackgroundActor": "..\\core\\backgnd.cpp",
        "CBaron": "..\\core\\baron.cpp",
        "CBaronWeapon": "..\\core\\baron.cpp",
        "CBarrier": "..\\core\\barrier.cpp",
        "CBassPlayer": "..\\core\\tbplayer.cpp",
        "CBat": "..\\core\\bat.cpp",
        "CBatCreature": "..\\core\\batcreat.cpp",
        "CBatman": "..\\core\\batman.cpp",
        "CBattery": "..\\core\\battery.cpp",
        "CBeast": "..\\core\\beast.cpp",
        "CBiggs": "..\\core\\biggs.cpp",
        "CBitFont": "..\\engine\\font.cpp",
        "CBloodParticle": "..\\core\\gore.cpp",
        "CBloodPool": "..\\core\\gore.cpp",
        "CBloodSplat": "..\\core\\gore.cpp",
        "CBodyPart": "..\\core\\bodypart.cpp",
        "CBoneGuy": "..\\core\\boneguy.cpp",
        "CBoneStructure": "..\\core\\skeledit.cpp",
        "CBoundingBox3D": "..\\core\\setcolid.cpp",
        "CBox": "..\\core\\box.cpp",
        "CBoxActor": "..\\core\\boxactor.cpp",
        "CBride": "..\\core\\bride.cpp",
        "CBugs": "..\\core\\bugs.cpp",
        "CBulletHole": "..\\core\\emitter.cpp",
        "CBulletTrail": "..\\core\\emitter.cpp",
        "CCameraView": "..\\core\\msnedit.cpp",
        "CChain": "..\\core\\chain.cpp",
        "CCharacter": "..\\core\\charactr.cpp",
        "CCheckOutList": "..\\engine\\fileio.cpp",
        "CCloth": "..\\core\\cloth.cpp",
        "CClothList": "..\\core\\cloth.cpp",
        "CCodec": "..\\support\\codec.cpp",
        "CColonel": "..\\core\\colonel.cpp",
        "CConsole": "..\\engine\\console.cpp",
        "CConveyor": "..\\core\\conveyor.cpp",
        "CCourse": "..\\core\\course.cpp",
        "CCrate": "..\\core\\crate.cpp",
        "CCrater": "..\\core\\fire.cpp",
        "CCrossbow": "..\\core\\crossbow.cpp",
        "CCryptVessel": "..\\core\\vessel.cpp",
        "CCurtain": "..\\core\\curtain.cpp",
        "CDeformableModel": "..\\core\\skeleton.cpp",
        "CDeformableModelInstance": "..\\core\\skeleton.cpp",
        "CDemonActor": "..\\core\\actor.cpp",
        "CDemonCamera": "..\\core\\dcamera.cpp",
        "CDemonCube": "..\\core\\dcube.cpp",
        "CDemonFileManager": "..\\engine\\fileio.cpp",
        "CDemonFilter": "..\\core\\dfilter.cpp",
        "CDemonGlobe": "..\\core\\dglobe.cpp",
        "CDemonImage": "..\\core\\dimage.cpp",
        "CDemonLight": "..\\core\\dlight.cpp",
        "CDemonMission": "..\\core\\mission.cpp",
        "CDemonPart": "..\\core\\dpart.cpp",
        "CDemonPod": "..\\engine\\pod.cpp",
        "CDemonRaytrace": "..\\core\\dtrace.cpp",
        "CDemonRenderer": "..\\engine\\drender.cpp",
        "CDemonSet": "..\\core\\set.cpp",
        "CDemonTriangle": "..\\core\\dtri.cpp",
        "CDestActor": "..\\core\\dest.cpp",
        "CDirectSoundDevice": "..\\sound\\snddx.cpp",
        "CDoor": "..\\core\\door.cpp",
        "CDraculaBride": "..\\core\\dracbrid.cpp",
        "CDrawSurface": "..\\cockpit\\drawsurf.cpp",
        "CDrip": "..\\core\\drip.cpp",
        "CDrone": "..\\core\\drone.cpp",
        "CDrummer": "..\\core\\tbplayer.cpp",
        "CDSEModel": "..\\shape\\dsemodel.cpp",
        "CDynamite": "..\\core\\dynamite.cpp",
        "CEdButton": "..\\shape\\edittool.cpp",
        "CEdCheck": "..\\shape\\edittool.cpp",
        "CEditorTools": "..\\shape\\edittool.cpp",
        "CEdScrollBar": "..\\shape\\edittool.cpp",
        "CElephantGun": "..\\core\\elephant.cpp",
        "CEmitter": "..\\core\\emitter.cpp",
        "CEnemy": "..\\core\\enemy.cpp",
        "CEventList": "..\\core\\event.cpp",
        "CExplosion": "..\\core\\fire.cpp",
        "CFileFinder": "..\\engine\\dosio.c",
        "CFilmProjector": "..\\core\\filmreel.cpp",
        "CFilmReel": "..\\core\\filmreel.cpp",
        "CFilterCache": "..\\core\\dfilter.cpp",
        "CFilterFX": "..\\core\\dfilter.cpp",
        "CFireball": "..\\core\\emitter.cpp",
        "CFlame": "..\\core\\flame.cpp",
        "CFlameCan": "..\\core\\flamecan.cpp",
        "CFlameThrower": "..\\core\\flamegun.cpp",
        "CFlashlight": "..\\core\\flashlit.cpp",
        "CFlies": "..\\core\\flies.cpp",
        "CFootstep": "..\\core\\gore.cpp",
        "CFrankenstienMachine": "..\\core\\frankgen.cpp",
        "CGabriella": "..\\core\\gabriela.cpp",
        "CGame": "..\\core\\game.cpp",
        "CGargoyle": "..\\core\\gargoyle.cpp",
        "CGasMask": "..\\core\\gasmask.cpp",
        "CGhoul": "..\\core\\ghoul.cpp",
        "CGlass": "..\\core\\glass.cpp",
        "CGlassParticle": "..\\core\\emitter.cpp",
        "CGore": "..\\core\\gore.cpp",
        "CGrave": "..\\core\\grave.cpp",
        "CGround": "..\\core\\ground.cpp",
        "CGroundTypeList": "..\\core\\ground.cpp",
        "CGun": "..\\core\\gun.cpp",
        "CGunFlame": "..\\core\\fire.cpp",
        "CHaystack": "..\\core\\haystack.cpp",
        "CHealthItem": "..\\core\\health.cpp",
        "CHero": "..\\core\\hero.cpp",
        "CHeroPlaceholder": "..\\core\\hero.cpp",
        "CHighPriestOfGardath": "..\\core\\hpriest.cpp",
        "CHiram": "..\\core\\hiram.cpp",
        "CHostage": "..\\core\\hostage.cpp",
        "CHotDemon": "..\\core\\hotdemon.cpp",
        "CIcePick": "..\\core\\icepick.cpp",
        "CImp": "..\\core\\imp.cpp",
        "cIni": "..\\engine\\ini.cpp",
        "CIniFile": "..\\engine\\ini.cpp",
        "CInputString": "..\\shape\\edittool.cpp",
        "CInventory": "..\\core\\inv.cpp",
        "CKeyActor": "..\\core\\keyactor.cpp",
        "CKeyFramedModel": "..\\core\\dmodel.cpp",
        "CKeyFramedModelInstance": "..\\core\\dmodel.cpp",
        "CLadder": "..\\core\\ladder.cpp",
        "CLarva": "..\\core\\larva.cpp",
        "CLaserBeam": "..\\core\\emitter.cpp",
        "CLeakChecker": "..\\shape\\memdbg.cpp",
        "CLever": "..\\core\\lever.cpp",
        "CLightActor": "..\\core\\box.cpp",
        "CLightCone": "..\\core\\litecone.cpp",
        "CLightGun": "..\\core\\lightgun.cpp",
        "CLightningBolt": "..\\core\\emitter.cpp",
        "CLodMesh": "..\\shape\\meshlod.cpp",
        "CLZWCompress": "..\\support\\codec.cpp",
        "CLZWDecompress": "..\\support\\codec.cpp",
        "CLZWDictionary": "..\\support\\codec.cpp",
        "CMansionPuzzleCircle": "..\\core\\manpuz.cpp",
        "CMarquee": "..\\core\\marquee.cpp",
        "CMatrix": "..\\core\\dirmat.cpp",
        "CMelee": "..\\core\\melee.cpp",
        "CMimic": "..\\core\\mimic.cpp",
        "CMineCar": "..\\core\\minecar.cpp",
        "CMirrorHack": "..\\core\\mirror.cpp",
        "CMobster": "..\\core\\mobster.cpp",
        "CMoloch": "..\\core\\moloch.cpp",
        "CMoon": "..\\core\\moon.cpp",
        "CMorph": "..\\core\\morph.cpp",
        "CMorphModel": "..\\core\\morph.cpp",
        "CMotionController": "..\\core\\motion.cpp",
        "CMouse": "..\\core\\mouse.cpp",
        "CMP3Decoder": "..\\sound\\mp3.cpp",
        "CMultiCram": "..\\shape\\multicrm.cpp",
        "CMuzzleFlash": "..\\core\\emitter.cpp",
        "CNetGame": "..\\core\\netgame.cpp",
        "CNPC": "..\\core\\npc.cpp",
        "CObj": "..\\core\\obj.cpp",
        "COptimize": "..\\core\\optimize.cpp",
        "CP2D": "..\\core\\p2d.cpp",
        "CP3D": "..\\core\\p3d.cpp",
        "CPackedBitmap": "..\\cockpit\\pkbitmap.cpp",
        "CPackedBitmapSet": "..\\cockpit\\pkbmpset.cpp",
        "CPaletteManager": "..\\engine\\palette.cpp",
        "CPassenger": "..\\core\\passngr.cpp",
        "CPathMap": "..\\core\\path.cpp",
        "CPendulum": "..\\core\\pendulum.cpp",
        "CPickList": "..\\shape\\edittool.cpp",
        "CPlatform": "..\\core\\platfrm.cpp",
        "CPod": "..\\engine\\pod.cpp",
        "CPodFile": "..\\engine\\pod.cpp",
        "CPoly": "..\\core\\poly.cpp",
        "CPopcorn": "..\\core\\emitter.cpp",
        "CRainDrop": "..\\core\\emitter.cpp",
        "CRock": "..\\core\\emitter.cpp",
        "CRuleList": "..\\core\\event.cpp",
        "CSampleInfo": "..\\sound\\sndmain.cpp",
        "CScat": "..\\core\\scat.cpp",
        "CScript": "..\\core\\script.cpp",
        "CSentinel": "..\\core\\sentinel.cpp",
        "CShell": "..\\core\\emitter.cpp",
        "CShotgun": "..\\core\\shotgun.cpp",
        "CShovel": "..\\core\\shovel.cpp",
        "CSimBox": "..\\core\\simbox.cpp",
        "CSkeleton": "..\\core\\skeleton.cpp",
        "CSlew": "..\\shape\\edittool.cpp",
        "CSmiley": "..\\core\\smiley.cpp",
        "CSmokeParticle": "..\\core\\emitter.cpp",
        "CSound": "..\\core\\sound.cpp",
        "CSpark": "..\\core\\emitter.cpp",
        "CSpike": "..\\core\\spike.cpp",
        "CSpotView": "..\\core\\msnedit.cpp",
        "CStairs": "..\\core\\stairs.cpp",
        "CStake": "..\\core\\emitter.cpp",
        "CStranger": "..\\core\\stranger.cpp",
        "CStrList": "..\\shape\\edittool.cpp",
        "CSuccubus": "..\\core\\succubus.cpp",
        "CSvetlana": "..\\core\\svetlana.cpp",
        "CTeleport": "..\\core\\teleport.cpp",
        "CTeleportDest": "..\\core\\teleport.cpp",
        "CTempleStone": "..\\core\\stone.cpp",
        "CTentacle": "..\\core\\tentacle.cpp",
        "CTextureCache": "..\\engine\\texture.cpp",
        "CTextureList": "..\\core\\texlist.cpp",
        "CTire": "..\\core\\vehicle.cpp",
        "CTommyGun": "..\\core\\tommygun.cpp",
        "CToss": "..\\core\\fire.cpp",
        "CTrail": "..\\core\\emitter.cpp",
        "CTrap": "..\\core\\trap.cpp",
        "CTrash": "..\\core\\trash.cpp",
        "CTrigger": "..\\core\\trigger.cpp",
        "CTurret": "..\\core\\turret.cpp",
        "CTVBat": "..\\core\\tvbat.cpp",
        "CVampireBoss": "..\\core\\vampboss.cpp",
        "CVec": "..\\core\\vec.cpp",
        "CVector": "..\\core\\vector.cpp",
        "CVehicle": "..\\core\\vehicle.cpp",
        "CWater": "..\\core\\water.cpp",
        "CWaterActor": "..\\core\\wateract.cpp",
        "CWavInDevice": "..\\sound\\snddx.cpp",
        "CWavOutDevice": "..\\sound\\snddx.cpp",
        "CWayPoint": "..\\core\\waypoint.cpp",
        "CWeapon": "..\\core\\weapon.cpp",
        "CWeather": "..\\core\\weather.cpp",
        "CWerewolf": "..\\core\\werewolf.cpp",
        "CWinFont": "..\\engine\\font.cpp",
        "CZombie": "..\\core\\zombie.cpp",
        "CZombieCow": "..\\core\\cow.cpp",
        "CZombieDog": "..\\core\\dog.cpp",
        "CZThumb": "..\\core\\setdir.cpp",
    }

def get_structure_files():
    return {
        "SBat": "..\\core\\moon.cpp",
        "SBodyPartFire": "..\\core\\bodypart.cpp",
        "SBodyPartModel": "..\\core\\bodypart.cpp",
        "SBoneGuyBox": "..\\core\\boneguy.cpp",
        "SBug": "..\\core\\bugs.cpp",
        "SChainVertex": "..\\core\\chain.cpp",
        "SChatHistory": "..\\core\\netgame.cpp",
        "SClipPlane": "..\\core\\minecar.cpp",
        "SClothBone": "..\\core\\cloth.cpp",
        "SClothVertex": "..\\core\\cloth.cpp",
        "SCmdParm": "..\\core\\script.cpp",
        "SCmdParse": "..\\core\\script.cpp",
        "SCollisionInfo": "..\\core\\curtain.cpp",
        "SCollisionReturnInfo": "..\\core\\set.cpp",
        "SCurtainVertex": "..\\core\\curtain.cpp",
        "SDamageInfo": "..\\core\\actor.cpp",
        "SFire": "..\\core\\flame.cpp",
        "SFly": "..\\core\\flies.cpp",
        "SFreaky": "..\\core\\dracbrid.cpp",
        "SfxOptions": "..\\sound\\sndmain.cpp",
        "SfxSample": "..\\sound\\sndmain.cpp",
        "SfxSlot": "..\\sound\\sndmain.cpp",
        "SGem": "..\\core\\manpuz.cpp",
        "SIntersectXZCylinder": "..\\core\\set.cpp",
        "SLaserInfo": "..\\core\\emitter.cpp",
        "SMemHead": "..\\shape\\memdbg.cpp",
        "SMorphControlPoint": "..\\core\\morph.cpp",
        "SNetPlayer": "..\\core\\netgame.cpp",
        "SPanel": "..\\core\\manpuz.cpp",
        "SPose": "..\\core\\charactr.cpp",
        "SRaytraceState": "..\\core\\set.cpp",
        "SReflector": "..\\core\\manpuz.cpp",
        "SRoom": "..\\core\\set.cpp",
        "SScrape": "..\\core\\boneguy.cpp",
        "STrainNoise": "..\\core\\sound.cpp",
        "STriangleRef": "..\\core\\dtri.cpp",
        "SVDBox": "..\\core\\set.cpp",
        "SVert": "..\\core\\skeleton.cpp",
        "SWaterVertex": "..\\core\\water.cpp",
    }

def get_rtti_type_aliases():
    """Map an RTTI class-name string to the Ghidra type that implements it.

    The name Watcom baked into the RTTI descriptor is not always the name the
    type carries in Ghidra: the sound structs lost their leading C, the LOD
    types gained one, CVector is the vector class Ghidra calls CVector3f, and
    GSPlayer is SPlayer. Without these the size check silently skipped the type
    instead of validating it. Every entry here is treated as a game type for
    checking purposes.
    """
    return {
        "CVector": "CVector3f",
        "GSPlayer": "SPlayer",
        "LodFace": "CLodFace",
        "LodMesh": "CLodMesh",
        "LodVert": "CLodVert",
        "SfxOptions": "CSfxOptions",
        "SfxSample": "CSfxSample",
        "SfxSlot": "CSfxSlot",
        "cIni": "CIni",
        "__1hlg6hbuttonStruct": "SButtonStruct",
    }

def resolve_ghidra_type_name(type_name, ghidra_struct_sizes, aliases):
    """Return the Ghidra type name backing an RTTI name, or None if absent."""
    if type_name in ghidra_struct_sizes:
        return type_name
    alias = aliases.get(type_name)
    if alias and alias in ghidra_struct_sizes:
        return alias
    # The name watcom_type_info gives a type nocedit does not have (CAmmo_Mana -> CAmmoMana)
    named = game_type_name(type_name)
    return named if named in ghidra_struct_sizes else None

def extract_type_name_from_string(string_value):

   # Not valid string
   if not string_value:
       return None

   # Check patterns
   type_name = None
   pattern1 = re.search(r'\$([A-Za-z_][A-Za-z0-9_:]*)\$\$', string_value)
   if pattern1:
       type_name = pattern1.group(1)
   pattern2 = re.search(r'\$\$([A-Za-z_][A-Za-z0-9_:]*)\$\$', string_value)
   if pattern2:
       type_name = pattern2.group(1)
   pattern3 = re.search(r'\$([A-Za-z_][A-Za-z0-9_:]*)\$', string_value)
   if pattern3:
       type_name = pattern3.group(1)

   # Filter out common false positives
   if type_name:
       false_positive_patterns = [
           r'^\w+\.[A-Z]{2,4}$',  # File extensions pattern (word.EXT)
           r'^(UNDO|SAVE|TEST|TMP|MOT|SYS|LOG|BAK|OLD|NEW)$',  # Common system tokens
           r'^\d+$',  # Pure numbers
       ]
       for fp_pattern in false_positive_patterns:
           if re.match(fp_pattern, type_name):
               return None
   return type_name

def find_class_method_references(string_value):

    # Not valid string
    if not string_value:
        return []

    # Pattern for Class::methodName references
    method_pattern = r'([A-Za-z_][A-Za-z0-9_]*?)::([A-Za-z_][A-Za-z0-9_]*)'
    references = []
    for match in re.finditer(method_pattern, string_value):
        class_name = normalize_class_name(match.group(1))
        method_name = match.group(2)
        references.append({
            'class': class_name,
            'method': method_name,
            'full_ref': match.group(0)
        })
    return references

def find_source_files_in_string(string_value):

    # Not valid string
    if not string_value:
        return []

    # Pattern for file paths with common extensions
    file_patterns = [
        r'[a-zA-Z]?[:\\\/]?(?:[.]{1,2}[\\\/])*(?:[a-zA-Z0-9_\-]+[\\\/])*[a-zA-Z0-9_\-]+\.[a-zA-Z]{1,4}',
        r'(?:[.]{1,2}[\\\/])+(?:[a-zA-Z0-9_\-]+[\\\/])*[a-zA-Z0-9_\-]+\.[a-zA-Z]{1,4}'
    ]
    files = set()
    for pattern in file_patterns:
        matches = re.finditer(pattern, string_value)
        for match in matches:
            file_path = match.group(0)
            if is_likely_source_file(file_path):
                files.add(file_path)
    return sorted(files)

def is_likely_source_file(file_path):

    # Not valid path
    if not file_path:
        return False

    # Check extension
    source_extensions = ['.cpp', '.c']
    has_source_ext = any(file_path.lower().endswith(ext) for ext in source_extensions)
    if not has_source_ext:
        return False

    # A bare filename (no directory) of a believable length
    if '/' not in file_path and '\\' not in file_path and len(file_path) > 100:
        return False

    # Skip obviously invalid patterns
    if file_path.startswith('http://') or file_path.startswith('https://'):
        return False

    # Should contain reasonable characters
    if not re.match(r'^[a-zA-Z0-9_\-./\\:]+$', file_path):
        return False
    return True

def get_functions_referencing_string(currentProgram, data_addr):
    """The functions with a reference to the address, each once, in the order the references come."""
    functions = {}
    for ref in currentProgram.getReferenceManager().getReferencesTo(data_addr):
        function = currentProgram.getFunctionManager().getFunctionContaining(ref.getFromAddress())
        if function:
            functions.setdefault(str(function.getEntryPoint()), function)
    return list(functions.values())

def collect_files_from_referencing_functions(currentProgram, referencing_functions):
    """The source file paths in the strings the functions refer to, in the order found."""
    reference_manager = currentProgram.getReferenceManager()
    listing = currentProgram.getListing()
    files = []
    for function in referencing_functions:
        for source in reference_manager.getReferenceSourceIterator(function.getBody(), True):
            for ref in reference_manager.getReferencesFrom(source):
                data = listing.getDefinedDataAt(ref.getToAddress())
                if data is None or not is_string_data_type_obj(data.getDataType()):
                    continue
                for file_path in find_source_files_in_string(extract_string_value(data)):
                    if file_path not in files:
                        files.append(file_path)
    return files

def field_number(component):
    """A WatcomTypeInfo field's value as a number: a Scalar's value, a pointer's offset, 0 when unset."""
    value = component.getValue()
    if value is None:
        return 0
    return value.getOffset() if hasattr(value, "getOffset") else value.getValue()


def read_watcom_typeinfo(currentProgram):
    """{class-name string address: {typeinfo_addr, size}} for each WatcomTypeInfo applied in the listing."""
    found = {}
    space = currentProgram.getAddressFactory().getDefaultAddressSpace()
    for data in currentProgram.getListing().getDefinedData(True):
        if data.getDataType() is None or data.getDataType().getName() != "WatcomTypeInfo":
            continue
        fields = {data.getComponent(i).getFieldName(): field_number(data.getComponent(i))
                  for i in range(data.getNumComponents())}
        class_name_ptr = fields.get("class_name", 0)
        if "instance_size" not in fields or not class_name_ptr:
            log_info("WatcomTypeInfo at %s has no class name or size (skipped)" % data.getAddress())
            continue
        found[str(space.getAddress(class_name_ptr))] = {"typeinfo_addr": str(data.getAddress()),
                                                        "size": fields["instance_size"]}
    log_info("Found %d WatcomTypeInfo structures" % len(found))
    return found


def export_type_info(currentProgram, path, strict = False, allow_size_mismatch = False):
    """Export RTTI-derived type info and validate struct sizes against it.

    strict is accepted for call-site symmetry with the other exports but no
    longer gates the size check: a Ghidra struct whose size disagrees with the
    binary's WatcomTypeInfo.instance_size always fails the export now that the
    struct layouts are settled. Pass allow_size_mismatch to downgrade the
    failure to a report.
    """

    # Get class info
    class_hierarchy = get_class_hierarchy()
    class_files = get_class_files()
    structure_files = get_structure_files()

    # Build the parent chains
    class_to_parents = {}
    def build_hierarchy(class_name, parent_chain = None):
        if parent_chain is None:
            parent_chain = []
        class_to_parents[class_name] = parent_chain[:]
        if class_name in class_hierarchy:
            children = class_hierarchy[class_name]
            new_parent_chain = parent_chain + [class_name]
            for child in children:
                build_hierarchy(child, new_parent_chain)
    build_hierarchy("CDemonActor")

    # Gather type info
    type_info_dict = {}
    methods_by_class = {}
    listing = currentProgram.getListing()
    watcom_typeinfo_map = read_watcom_typeinfo(currentProgram)

    # Build a map of Ghidra struct/class names to their defined sizes.
    # Used to validate WatcomTypeInfo.instance_size against Ghidra definitions.
    # A name can live in more than one category (the system headers duplicate
    # tagRECT, _CONTEXT and friends across windef.h/winnt.h/wingdi.h), so keep
    # every size seen for a name rather than letting the last one win, and
    # accept the type if the binary's instance_size is any of them.
    ghidra_struct_sizes = {}
    dtm = currentProgram.getDataTypeManager()
    for dt in dtm.getAllDataTypes():
        dt_name = dt.getName()
        if dt_name and dt.getLength() > 0:
            ghidra_struct_sizes.setdefault(dt_name, set()).add(dt.getLength())

    # Buckets for the final size report
    rtti_aliases = get_rtti_type_aliases()
    size_mismatches = []
    size_matches = []
    size_unresolved = []
    size_skipped = []

    log_info("Scanning for type information strings")
    for data in listing.getDefinedData(True):
        if is_string_data_type_obj(data.getDataType()):
            string_value = extract_string_value(data)
            if string_value:
                data_addr = data.getAddress()
                data_addr_str = str(data_addr)

                # Check for basic type info patterns
                type_name = extract_type_name_from_string(string_value)
                if type_name:
                    if type_name not in type_info_dict:
                        type_info_dict[type_name] = {
                            "name": type_name,
                            "addr": data_addr_str
                        }

                        # Look up this string address in the WatcomTypeInfo map
                        if data_addr_str in watcom_typeinfo_map:
                            typeinfo_data = watcom_typeinfo_map[data_addr_str]
                            type_info_dict[type_name]["typeinfo_size"] = typeinfo_data["size"]
                            type_info_dict[type_name]["typeinfo_addr"] = typeinfo_data["typeinfo_addr"]

                            # Validate: Ghidra struct size must match binary's instance_size.
                            # Every type with RTTI is the game's but the Watcom library's
                            # iostream classes, whichever program it is.
                            expected_size = typeinfo_data["size"]
                            is_game_type = type_name not in LIBRARY_CLASSES
                            ghidra_name = resolve_ghidra_type_name(
                                type_name, ghidra_struct_sizes, rtti_aliases)
                            if expected_size <= 0 or not is_game_type:
                                size_skipped.append(type_name)
                            elif ghidra_name is None:
                                size_unresolved.append(
                                    "%s: no Ghidra type, WatcomTypeInfo=%d (0x%x)" %
                                    (type_name, expected_size, expected_size))
                            else:
                                ghidra_sizes = sorted(ghidra_struct_sizes[ghidra_name])
                                if expected_size in ghidra_sizes:
                                    size_matches.append(type_name)
                                else:
                                    msg = ("Size mismatch for %s: Ghidra %s=%s, "
                                           "WatcomTypeInfo=%d (0x%x)" %
                                           (type_name, ghidra_name,
                                            ", ".join("%d (0x%x)" % (s, s)
                                                      for s in ghidra_sizes),
                                            expected_size, expected_size))
                                    size_mismatches.append(msg)
                    log_info("Found type info at %s: '%s'" % (data_addr, type_name))

                # Look for Class::method references
                method_refs = find_class_method_references(string_value)
                if method_refs:
                    referencing_functions = get_functions_referencing_string(currentProgram, data_addr)
                    for ref in method_refs:
                        class_name = ref['class']
                        method_name = ref['method']

                        # Initialize class entry if needed
                        if class_name not in methods_by_class:
                            methods_by_class[class_name] = {}

                        # Initialize method entry if needed
                        if method_name not in methods_by_class[class_name]:
                            methods_by_class[class_name][method_name] = {
                                "refs": {
                                    "string": set(),
                                    "function": set(),
                                    "file": set()
                                },
                                "source": ref['full_ref']
                            }

                        # Add references
                        method_entry_refs = methods_by_class[class_name][method_name]["refs"]
                        method_entry_refs["string"].add(data_addr_str)
                        method_entry_refs["function"].update(
                            str(f.getEntryPoint()) for f in referencing_functions)
                        method_entry_refs["file"].update(
                            collect_files_from_referencing_functions(currentProgram, referencing_functions))

    # Convert to lists
    for class_name in methods_by_class:
        for method_name in methods_by_class[class_name]:
            method_entry = methods_by_class[class_name][method_name]
            method_entry_refs = method_entry["refs"]
            method_entry_refs["string"] = sorted(method_entry_refs["string"])
            method_entry_refs["function"] = sorted(method_entry_refs["function"])
            method_entry_refs["file"] = sorted(method_entry_refs["file"])

    # Merge methods into type info
    for class_name, methods in methods_by_class.items():
        if class_name not in type_info_dict:
            type_info_dict[class_name] = {
                "name": class_name,
                "addr": None
            }
        type_info_dict[class_name]["methods"] = methods

    # Add missing classes
    log_info("Adding missing classes")
    classes_added_from_files = 0
    for class_name in class_files.keys():
        if class_name not in type_info_dict:
            type_info_dict[class_name] = {
                "name": class_name,
                "addr": None
            }
            classes_added_from_files += 1
            log_info("Added class from file mapping: %s" % class_name)

    # Add missing structures
    log_info("Adding missing structures")
    structures_added_from_files = 0
    for structure_name in structure_files.keys():
        if structure_name not in type_info_dict:
            type_info_dict[structure_name] = {
                "name": structure_name,
                "addr": None
            }
            structures_added_from_files += 1
            log_info("Added structure from file mapping: %s" % structure_name)

    # Add parent and file information to each type
    for type_name, type_info in type_info_dict.items():
        normalized_name = normalize_class_name(type_name)

        # Add parent information
        if normalized_name in class_to_parents:
            type_info["parents"] = class_to_parents[normalized_name]
            log_info("Added parents for %s: %s" % (type_name, class_to_parents[normalized_name]))
        else:
            type_info["parents"] = []

        # Add file information
        if normalized_name in class_files and class_files[normalized_name]:
            type_info["file"] = class_files[normalized_name]
            log_info("Added file for %s: %s" % (type_name, class_files[normalized_name]))
        else:
            type_info["file"] = None

    # Convert to list format and separate by whether they have addresses
    types_with_addr = []
    types_without_addr = []
    for type_info in type_info_dict.values():
        if type_info["addr"] is not None:
            types_with_addr.append(type_info)
        else:
            types_without_addr.append(type_info)

    # Merge both lists and sort by name
    all_type_info = types_with_addr + types_without_addr
    all_type_info.sort(key=lambda x: x["name"])

    # Create summary
    type_info_data = {
        "type_info": all_type_info,
        "count": len(type_info_dict)
    }

    # Log summary
    types_with_methods_addr = sum(1 for info in types_with_addr if "methods" in info)
    types_with_methods_no_addr = sum(1 for info in types_without_addr if "methods" in info)
    types_with_parents = sum(1 for info in all_type_info if info.get("parents"))
    types_with_files = sum(1 for info in all_type_info if info.get("file"))
    log_info("Summary: %d types total" % len(type_info_dict))
    log_info("  %d types with addresses, %d with method references" % (len(types_with_addr), types_with_methods_addr))
    log_info("  %d types without addresses, %d with method references" % (len(types_without_addr), types_with_methods_no_addr))
    log_info("  %d types with parent information" % types_with_parents)
    log_info("  %d types with file information" % types_with_files)

    # Report the struct size validation. Nothing here is silent: every type
    # carrying a WatcomTypeInfo.instance_size lands in exactly one bucket, so a
    # shrinking checked count is visible rather than reading as "all clear".
    log_info("=" * 60)
    log_info("WATCOM RTTI STRUCT SIZE CHECK")
    log_info("  %d checked and matching" % len(size_matches))
    log_info("  %d mismatched" % len(size_mismatches))
    log_info("  %d game type(s) with no Ghidra type (not checked)" % len(size_unresolved))
    for msg in sorted(size_unresolved):
        log_info("    " + msg)
    log_info("  %d non-game type(s) skipped (CRT/Watcom stdlib): %s"
             % (len(size_skipped), ", ".join(sorted(size_skipped))))
    # log_warning, not log_error: log_error exits, before the export or --allow-struct-size-mismatch
    if size_mismatches:
        log_warning("STRUCT SIZE MISMATCHES (%d):" % len(size_mismatches))
        for msg in size_mismatches:
            log_warning("  " + msg)
    log_info("=" * 60)

    # Export type info. This is written even when the check failed: the exported
    # typeinfo_size is the binary's own instance_size, which is the ground truth
    # you diff the Ghidra definition against to find what drifted.
    log_info("Exporting type info entries")
    save_json_file(path, "type_info", clean_data(type_info_data))
    log_info("Export complete")

    # WatcomTypeInfo.instance_size is what the shipped binary was compiled with,
    # so a Ghidra struct that disagrees is a bug in the Ghidra definition, not a
    # difference of opinion. Fail hard rather than exporting pseudocode built on
    # a struct layout that is known to be wrong. --allow-struct-size-mismatch
    # downgrades this to the report above if an export is needed anyway.
    if size_mismatches and not allow_size_mismatch:
        raise StructSizeMismatchError(
            "Struct size mismatch: %d type(s) have Ghidra sizes that don't match "
            "WatcomTypeInfo.instance_size in the binary. Fix the struct "
            "definitions in Ghidra before exporting, or pass "
            "--allow-struct-size-mismatch to export anyway.\n" % len(size_mismatches)
            + "\n".join(size_mismatches))
