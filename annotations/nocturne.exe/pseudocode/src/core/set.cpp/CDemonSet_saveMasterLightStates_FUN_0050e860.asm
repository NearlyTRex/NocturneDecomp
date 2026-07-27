; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_set_cpp_CDemonSet_saveMasterLightStates_FUN_0050e860(undefined4 param_1,int *param_2)
;
;
; XREF[1]:
;   core_game.cpp_FUN_004a3b90 at 004a3d59
;
; Referenced Globals:
;   undefined4 DAT_01fb99d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050e860
        ;   Label: core_set.cpp_CDemonSet_saveMasterLightStates_FUN_0050e860
    MOV EBX,dword ptr [0x01fb99d0]      ; 0050e861 | DAT_01fb99d0
    MOV ECX,dword ptr [ESP + 0xc]       ; 0050e867
    MOV EAX,EBX                         ; 0050e86b
    MOV dword ptr [ECX],EBX             ; 0050e86d
    XOR EAX,EBX                         ; 0050e86f
    TEST EBX,EBX                        ; 0050e871
    JLE 0x0050e890                      ; 0050e873
        ;   XREF to: 0050e890 (CONDITIONAL_JUMP)  ; LAB_0050e890
    MOV EDX,ECX                         ; 0050e875
    MOV ECX,dword ptr [EAX*0x4 + 0x1fb99d4] ; 0050e877
        ;   Label: LAB_0050e877
    ADD EDX,0x4                         ; 0050e87e
    MOV ECX,dword ptr [ECX + 0x1cb4]    ; 0050e881
    INC EAX                             ; 0050e887
    MOV dword ptr [EDX],ECX             ; 0050e888
    CMP EAX,EBX                         ; 0050e88a
    JL 0x0050e877                       ; 0050e88c
        ;   XREF to: 0050e877 (CONDITIONAL_JUMP)  ; LAB_0050e877
    MOV EAX,EAX                         ; 0050e88e
    MOV dword ptr [0x01fb99d0],EBX      ; 0050e890 | DAT_01fb99d0
        ;   Label: LAB_0050e890
    POP EBX                             ; 0050e896
    RET                                 ; 0050e897

