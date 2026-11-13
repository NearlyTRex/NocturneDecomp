; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __stack2_esi core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90(CDeformableModelInstance *this_ptr,int bone_index,CVector3f *out_position)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bone_index
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[51]:
;   core_batcreat.cpp_CBatCreature_getTargetPoints_FUN_00412990 at 004129b9
;   core_batcreat.cpp_CBatCreature_processDamage_FUN_00412760 at 004127bb
;   core_batman.cpp_CBatman_getTargetPoints_FUN_004144c0 at 004144e6
;   core_batman.cpp_CBatman_processDamage_FUN_00414290 at 004142eb
;   core_batman.cpp_CBatman_process_FUN_00412f40 at 00413295
;   core_beast.cpp_CBeast_getTargetPoints_FUN_00414b90 at 00414bae
;   core_biggs.cpp_CBiggs_getTargetPoints_FUN_00415390 at 004153ae
;   core_boneguy.cpp_CBoneGuy_getTargetPoints_FUN_00419f30 at 00419f6c
;   core_bride.cpp_CBride_getTargetPoints_FUN_0041ed20 at 0041ed58
;   core_bride.cpp_CBride_processDamage_FUN_0041ead0 at 0041eb1a
;   ... and 41 more
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00546a90
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
    SUB ESP,0xc                         ; 00546a91
    MOV EDX,ESI                         ; 00546a94
    MOV ECX,dword ptr [ESP + 0x18]      ; 00546a96
    LEA EAX,[ECX*0x4 + 0x0]             ; 00546a9a
    SUB EAX,ECX                         ; 00546aa1
    MOV ECX,dword ptr [ESP + 0x14]      ; 00546aa3
    SHL EAX,0x4                         ; 00546aa7
    ADD ECX,EAX                         ; 00546aaa
    MOV EAX,dword ptr [ECX + 0xe8c]     ; 00546aac
    MOV dword ptr [ESP],EAX             ; 00546ab2
    MOV EAX,dword ptr [ECX + 0xe9c]     ; 00546ab5
    MOV EDI,ESI                         ; 00546abb
    MOV dword ptr [ESP + 0x4],EAX       ; 00546abd
    MOV EAX,dword ptr [ECX + 0xeac]     ; 00546ac1
    MOV ESI,ESP                         ; 00546ac7
    MOV dword ptr [ESP + 0x8],EAX       ; 00546ac9
    MOVSD ES:EDI,ESI                    ; 00546acd
    MOVSD ES:EDI,ESI                    ; 00546ace
    MOVSD ES:EDI,ESI                    ; 00546acf
    MOV EAX,EDX                         ; 00546ad0
    ADD ESP,0xc                         ; 00546ad2
    POP EDI                             ; 00546ad5
    RET                                 ; 00546ad6

