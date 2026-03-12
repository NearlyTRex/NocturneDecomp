; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CGunFlame_activate_FUN_004c4db0(CGunFlame *this_ptr,CVector3f *position,CVector3f *euler_angles,int flame_type)
;
; Parameters:
; CGunFlame *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   euler_angles
; int              Stack[0x10]:4   flame_type
; Local Variables:
; CMatrix3x3f      Stack[-0x6c]:36  local_6c
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; CVector3f        Stack[-0x38]:12  local_38
; CVector3f        Stack[-0x2c]:12  local_2c
; CVector3f        Stack[-0x20]:12  local_20
; undefined4       Stack[-0x14]:4  local_14
; float            Stack[-0x10]:4  local_10
; float            Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createGunFlames_FUN_004c8ef0 at 004c8f20
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c4db0
        ;   Label: core_fire.cpp_CGunFlame_activate_FUN_004c4db0
    PUSH ESI                            ; 004c4db1
    SUB ESP,0x64                        ; 004c4db2
    MOV EBX,dword ptr [ESP + 0x70]      ; 004c4db5
    MOV EDX,dword ptr [ESP + 0x74]      ; 004c4db9
    MOV ESI,dword ptr [ESP + 0x78]      ; 004c4dbd
    LEA EAX,[EBX + 0x4]                 ; 004c4dc1
    CMP EAX,EDX                         ; 004c4dc4
    JZ 0x004c4dd8                       ; 004c4dc6
        ;   XREF to: 004c4dd8 (CONDITIONAL_JUMP)  ; LAB_004c4dd8
    MOV ECX,dword ptr [EDX]             ; 004c4dc8
    MOV dword ptr [EAX],ECX             ; 004c4dca
    MOV ECX,dword ptr [EDX + 0x4]       ; 004c4dcc
    MOV dword ptr [EAX + 0x4],ECX       ; 004c4dcf
    MOV ECX,dword ptr [EDX + 0x8]       ; 004c4dd2
    MOV dword ptr [EAX + 0x8],ECX       ; 004c4dd5
    PUSH 0x3f800000                     ; 004c4dd8
        ;   Label: LAB_004c4dd8
    PUSH 0x3f666666                     ; 004c4ddd
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004c4de2
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)

