import os
import re
from ghidra_annotations.util import *

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
            "CCrate", "CChain", "CCharacter"
        ],
        "CWeapon": [
            "CTurret", "CTommyGun", "CShovel", "CShotgun", "CMelee", "CLightGun",
            "CGun", "CFlashlight", "CFlameThrower", "CElephantGun", "CDynamite",
            "CCrossbow", "CBaronWeapon"
        ],
        "CTrigger": ["CWayPoint"],
        "CPlatform": ["CMineCar", "CConveyor"],
        "CActorDestination": ["CFilmProjector"],
        "CCharacter": [
            "CNPC", "CHero", "CEnemy", "CBoxActor", "CBodyPart", "CBattery",
            "CBat", "CBarrier", "CBackgroundActor", "CAnvil", "CAmmoBox", "CAmmo"
        ],
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
        "CBitFont": "..\engine\font.cpp",
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
        "CConsole": "..\engine\console.cpp",
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
        "CDemonPod": "..\engine\pod.cpp",
        "CDemonRaytrace": "..\\core\\dtrace.cpp",
        "CDemonRenderer": "..\engine\drender.cpp",
        "CDemonSet": "..\\core\\set.cpp",
        "CDemonTriangle": "..\\core\\dtri.cpp",
        "CDestActor": "..\\core\\dest.cpp",
        "CDirectSoundDevice": "..\\sound\\snddx.cpp",
        "CDoor": "..\\core\\door.cpp",
        "CDraculaBride": "..\\core\\dracbrid.cpp",
        "CDrawSurface": "..\\cockpit\drawsurf.cpp",
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
        "cIni": "..\engine\ini.cpp",
        "CIniFile": "..\engine\ini.cpp",
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
        "CLZWCompress": "..\support\codec.cpp",
        "CLZWDecompress": "..\support\codec.cpp",
        "CLZWDictionary": "..\support\codec.cpp",
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
        "CPackedBitmap": "..\\cockpit\pkbitmap.cpp",
        "CPackedBitmapSet": "..\\cockpit\pkbmpset.cpp",
        "CPaletteManager": "..\engine\palette.cpp",
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
        "CTextureCache": "..\engine\texture.cpp",
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
        "CWinFont": "..\engine\font.cpp",
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

    # Must have at least one directory separator or be a reasonable filename
    if '/' not in file_path and '\\' not in file_path:
        if len(file_path) < 3 or len(file_path) > 100:
            return False

    # Skip obviously invalid patterns
    if file_path.startswith('http://') or file_path.startswith('https://'):
        return False

    # Should contain reasonable characters
    if not re.match(r'^[a-zA-Z0-9_\-./\\:]+$', file_path):
        return False
    return True

def get_functions_referencing_string(currentProgram, data_addr):

    # Get all references TO this string address
    referencing_functions = []
    refs = currentProgram.getReferenceManager().getReferencesTo(data_addr)
    for ref in refs:
        from_addr = ref.getFromAddress()

        # Find the function containing the reference
        function = currentProgram.getFunctionManager().getFunctionContaining(from_addr)
        if function:
            func_addr = str(function.getEntryPoint())
            if func_addr not in referencing_functions:
                referencing_functions.append(func_addr)
    return referencing_functions

def collect_files_from_referencing_functions(currentProgram, referencing_functions):

    # Build file list
    files = []
    for func_addr_str in referencing_functions:

        # Get function address
        func_addr = get_addr_obj(currentProgram, func_addr_str)
        if not func_addr:
            continue

        # Get function
        function = currentProgram.getFunctionManager().getFunctionAt(func_addr)
        if not function:
            continue

        # Get all strings referenced by this function
        for addr_range in function.getBody():
            current_addr = addr_range.getMinAddress()
            while current_addr and current_addr.compareTo(addr_range.getMaxAddress()) <= 0:

                # Check if there are references from this address
                reference_manager = currentProgram.getReferenceManager()
                refs = reference_manager.getReferencesFrom(current_addr)
                for ref in refs:
                    to_addr = ref.getToAddress()

                    # Check if the target is a string
                    data = currentProgram.getListing().getDefinedDataAt(to_addr)
                    if data and is_string_data_type_obj(data.getDataType()):
                        string_value = extract_string_value(data)
                        if string_value:

                            # Look for file paths in this string
                            file_paths = find_source_files_in_string(string_value)
                            for file_path in file_paths:
                                if file_path not in files:
                                    files.append(file_path)

                # Move to next instruction/data
                next_addr = current_addr.next()
                if next_addr and next_addr.compareTo(current_addr) > 0:
                    current_addr = next_addr
                else:
                    break
    return files

def export_type_info(currentProgram, path):

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
    memory = currentProgram.getMemory()

    # First, build a map of all WatcomTypeInfo structures
    # Map: class_name_string_address -> typeinfo_data
    watcom_typeinfo_map = {}
    log_info("Searching for WatcomTypeInfo structures...")
    for data in listing.getDefinedData(True):
        data_type = data.getDataType()
        if data_type is not None:
            type_name_str = str(data_type.getName())

            # Look for WatcomTypeInfo structures
            if type_name_str == "WatcomTypeInfo":
                try:
                    typeinfo_addr = data.getAddress()

                    # Try to access structure components by name
                    num_components = data.getNumComponents()
                    instance_size = None
                    class_name_ptr = None
                    for i in range(num_components):
                        component = data.getComponent(i)
                        field_name = component.getFieldName()

                        # Get instance size
                        if field_name == "instance_size":
                            value = component.getValue()
                            if value is not None:
                                # Check if it's a Scalar (numeric value)
                                if hasattr(value, 'getValue'):
                                    instance_size = value.getValue()
                                elif hasattr(value, 'intValue'):
                                    instance_size = value.intValue()
                                else:
                                    instance_size = int(value)
                            else:
                                instance_size = 0

                        # Get class name
                        elif field_name == "class_name":
                            value = component.getValue()
                            if value is not None:
                                if hasattr(value, 'getOffset'):
                                    class_name_ptr = value.getOffset()
                                else:
                                    try:
                                        class_name_ptr = int(str(value), 16)
                                    except:
                                        class_name_ptr = int(value)
                            else:
                                class_name_ptr = 0

                    # Store in map using string address as key
                    if instance_size is not None and class_name_ptr is not None and class_name_ptr != 0:
                        class_name_addr = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(class_name_ptr)
                        watcom_typeinfo_map[str(class_name_addr)] = {
                            "typeinfo_addr": str(typeinfo_addr),
                            "size": instance_size
                        }
                        log_info("Found WatcomTypeInfo at %s: class_name_ptr=%s, size=0x%x" %
                                (typeinfo_addr, class_name_addr, instance_size))
                    else:
                        log_info("WatcomTypeInfo at %s: instance_size=%s, class_name_ptr=0x%x (skipped)" %
                                (typeinfo_addr, instance_size, class_name_ptr if class_name_ptr else 0))
                except Exception as e:
                    log_info("Error processing WatcomTypeInfo at %s: %s" % (data.getAddress(), str(e)))
    log_info("Found %d WatcomTypeInfo structures" % len(watcom_typeinfo_map))
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
                        method_entry = methods_by_class[class_name][method_name]
                        method_entry_refs = method_entry["refs"]
                        if data_addr_str:
                            method_entry_refs["string"].add(data_addr_str)
                        for func_addr in referencing_functions:
                            if func_addr:
                                method_entry_refs["function"].add(func_addr)
                        if referencing_functions:
                            method_files = collect_files_from_referencing_functions(currentProgram, referencing_functions)
                            for file_path in method_files:
                                if file_path:
                                    method_entry_refs["file"].add(file_path)

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

    # Export type info
    log_info("Exporting type info entries")
    save_json_file(path, "type_info", clean_data(type_info_data))
    log_info("Export complete")
