; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_addDynamicLight_FUN_00537270(CDemonSet *this_ptr,CDemonLight *light)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CDemonLight *    Stack[0x8]:4   light
;
; XREF[4]:
;   core_boxactor.cpp_CLightActor_process_FUN_00420420 at 00420679
;   core_elephant.cpp_CElephantGun_process_FUN_00486c30 at 00486d23
;   core_set.cpp_FUN_00535da0 at 00535ddf
;   core_weapon.cpp_CWeapon_process_FUN_0057b160 at 0057b290
;
; Referenced Globals:
;   TerminatedCString s_core_set_cpp_005d05f7
;   TerminatedCString s_Too_many_dynamic_lights_005d0607
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_0203ad1c
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00537270
        ;   Label: core_set.cpp_CDemonSet_addDynamicLight_FUN_00537270
    PUSH ESI                            ; 00537271
    MOV ESI,dword ptr [0x0203ad1c]      ; 00537272 | DAT_0203ad1c
    MOV EBX,dword ptr [ESP + 0x10]      ; 00537278
    CMP dword ptr [EBX + 0x1cb4],0x0    ; 0053727c
    JZ 0x005372ba                       ; 00537283
        ;   XREF to: 005372ba (CONDITIONAL_JUMP)  ; LAB_005372ba
    TEST ESI,ESI                        ; 00537285
    JLE 0x005372a1                      ; 00537287
        ;   XREF to: 005372a1 (CONDITIONAL_JUMP)  ; LAB_005372a1
    LEA EDX,[ESI*0x4 + 0x0]             ; 00537289
    XOR EAX,EAX                         ; 00537290
    CMP EBX,dword ptr [EAX + 0x203ad20] ; 00537292
        ;   Label: LAB_00537292
    JZ 0x005372ba                       ; 00537298
        ;   XREF to: 005372ba (CONDITIONAL_JUMP)  ; LAB_005372ba
    ADD EAX,0x4                         ; 0053729a
    CMP EAX,EDX                         ; 0053729d
    JL 0x00537292                       ; 0053729f
        ;   XREF to: 00537292 (CONDITIONAL_JUMP)  ; LAB_00537292
    MOV dword ptr [0x0203ad1c],ESI      ; 005372a1 | DAT_0203ad1c
        ;   Label: LAB_005372a1
    CMP ESI,0x4                         ; 005372a7
    JGE 0x005372c3                      ; 005372aa
        ;   XREF to: 005372c3 (CONDITIONAL_JUMP)  ; LAB_005372c3
    MOV ESI,dword ptr [0x0203ad1c]      ; 005372ac | DAT_0203ad1c
        ;   Label: LAB_005372ac
    INC ESI                             ; 005372b2
    MOV dword ptr [ESI*0x4 + 0x203ad1c],EBX ; 005372b3 | DAT_0203ad1c
    MOV dword ptr [0x0203ad1c],ESI      ; 005372ba | DAT_0203ad1c
        ;   Label: LAB_005372ba
    POP ESI                             ; 005372c0
    POP EBX                             ; 005372c1
    RET                                 ; 005372c2
    PUSH EDI                            ; 005372c3
        ;   Label: LAB_005372c3
    MOV ECX,0x5d05f7                    ; 005372c4 | = "..\\core\\set.cpp"
    MOV EDI,0x9c5                       ; 005372c9
    PUSH 0x5d0607                       ; 005372ce | = "Too many dynamic lights!"
    MOV dword ptr [0x01d71de0],ECX      ; 005372d3 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 005372d9 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 005372df
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 005372e4
    POP EDI                             ; 005372e7
    JMP 0x005372ac                      ; 005372e8
        ;   XREF to: 005372ac (UNCONDITIONAL_JUMP)  ; LAB_005372ac

