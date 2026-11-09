; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_CDemonSet_setRayType_FUN_005592d0(CDemonSet *this_ptr,int ray_type)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   ray_type
;
; XREF[17]:
;   core_actor.cpp_FUN_00409f20 at 0040a52b
;   core_charactr.cpp_FUN_00432f10 at 004334f8
;   core_crossbow.cpp_FUN_00449a50 at 00449c13
;   core_doc.cpp_FUN_00471af0 at 00471b86
;   core_doc.cpp_FUN_004724a0 at 00472cdf
;   core_elephant.cpp_FUN_0049e1a0 at 0049e45b
;   core_gabriela.cpp_FUN_004c7aa0 at 004c80f3
;   core_gabriela.cpp_FUN_004ca0c0 at 004ca3a8
;   core_game.cpp_FUN_004d9260 at 004d9a11
;   core_gun.cpp_FUN_004e8630 at 004e880a
;   ... and 7 more
;
; Referenced Globals:
;   TerminatedCString s_core_setcolid_cpp_005f0f88
;   TerminatedCString s_CDemonSet_setRayType_use_005f0f9d
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005592d0
        ;   Label: core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005592d4
    MOV dword ptr [EAX + 0x15f698],EDX  ; 005592d8
    CMP EDX,0x3                         ; 005592de
    JZ 0x005592e4                       ; 005592e1
        ;   XREF to: 005592e4 (CONDITIONAL_JUMP)  ; LAB_005592e4
    RET                                 ; 005592e3
    PUSH EBX                            ; 005592e4
        ;   Label: LAB_005592e4
    MOV ECX,0x5f0f88                    ; 005592e5 | = "..\\core\\setcolid.cpp"
    MOV EBX,0x49a                       ; 005592ea
    PUSH 0x5f0f9d                       ; 005592ef | = "CDemonSet::setRayType - use setRayTyp..."
    MOV dword ptr [0x01d1d400],ECX      ; 005592f4 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 005592fa | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00559300
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00559305
    POP EBX                             ; 00559308
    RET                                 ; 00559309

