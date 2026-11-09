; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_setCameraAmbientValueByGroup_FUN_00555970(CDemonSet *this_ptr,int group_id,float value)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   group_id
; float            Stack[0xc]:4   value
;
; XREF[1]:
;   core_event.cpp_FUN_004a1d00 at 004a55b9
;
; Called Functions:
;   core_set.cpp_FUN_005558f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00555970
        ;   Label: core_set.cpp_CDemonSet_setCameraAmbientValueByGroup_FUN_00555970
    PUSH ESI                            ; 00555971
    PUSH EDI                            ; 00555972
    PUSH EBP                            ; 00555973
    MOV EDI,dword ptr [ESP + 0x14]      ; 00555974
    MOV EBP,dword ptr [ESP + 0x18]      ; 00555978
    MOV EDX,dword ptr [EDI]             ; 0055597c
    XOR EBX,EBX                         ; 0055597e
    TEST EDX,EDX                        ; 00555980
    JLE 0x0055599b                      ; 00555982
        ;   XREF to: 0055599b (CONDITIONAL_JUMP)  ; LAB_0055599b
    MOV ESI,EDI                         ; 00555984
    CMP EBP,dword ptr [ESI + 0x150]     ; 00555986
        ;   Label: LAB_00555986
    JZ 0x005559a0                       ; 0055598c
        ;   XREF to: 005559a0 (CONDITIONAL_JUMP)  ; LAB_005559a0
    INC EBX                             ; 0055598e
        ;   Label: LAB_0055598e
    MOV ECX,dword ptr [EDI]             ; 0055598f
    ADD ESI,0x1a4                       ; 00555991
    CMP EBX,ECX                         ; 00555997
    JL 0x00555986                       ; 00555999
        ;   XREF to: 00555986 (CONDITIONAL_JUMP)  ; LAB_00555986
    POP EBP                             ; 0055599b
        ;   Label: LAB_0055599b
    POP EDI                             ; 0055599c
    POP ESI                             ; 0055599d
    POP EBX                             ; 0055599e
    RET                                 ; 0055599f
    PUSH dword ptr [ESP + 0x1c]         ; 005559a0
        ;   Label: LAB_005559a0
    PUSH EBX                            ; 005559a4
    PUSH EDI                            ; 005559a5
    CALL core_set.cpp_FUN_005558f0      ; 005559a6
        ;   XREF to: 005558f0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_005558f0(CDemonSet * this_ptr, int index, float value)
    ADD ESP,0xc                         ; 005559ab
    JMP 0x0055598e                      ; 005559ae
        ;   XREF to: 0055598e (UNCONDITIONAL_JUMP)  ; LAB_0055598e

