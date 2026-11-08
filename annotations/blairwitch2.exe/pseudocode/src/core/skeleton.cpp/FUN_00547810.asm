; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00547810(int param_1)
;
;
; XREF[50]:
;   FUN_004093a0 at 004097dc
;   FUN_004116f0 at 00411880
;   FUN_00412be0 at 00412d70
;   FUN_004184c0 at 00418632
;   FUN_0041a0c0 at 0041a0f2
;   FUN_0041d9c0 at 0041dacc
;   FUN_00420e90 at 0042119b
;   FUN_00421b10 at 00421bcb
;   FUN_004247f0 at 00424826
;   FUN_00425a70 at 00425a7f
;   ... and 40 more
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005e73f7
;   TerminatedCString s_CDeformableModelInstance_005e740c
;   TerminatedCString s_core_skeleton_cpp_005e745a
;   TerminatedCString s_Tried_to_do_something_wi_005e746f
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00547810
        ;   Label: FUN_00547810
    PUSH EDI                            ; 00547811
    PUSH EBP                            ; 00547812
    MOV EBX,dword ptr [ESP + 0x10]      ; 00547813
    CMP dword ptr [EBX + 0x22b0],0x0    ; 00547817
    JNZ 0x0054784c                      ; 0054781e
        ;   XREF to: 0054784c (CONDITIONAL_JUMP)  ; LAB_0054784c
    CMP byte ptr [EBX + 0x2260],0x0     ; 00547820
    JNZ 0x00547856                      ; 00547827
        ;   XREF to: 00547856 (CONDITIONAL_JUMP)  ; LAB_00547856
    MOV EDI,0x5e73f7                    ; 00547829 | = "..\\core\\skeleton.cpp"
    MOV EBP,0xde0                       ; 0054782e
    PUSH 0x5e740c                       ; 00547833 | = "CDeformableModelInstance::getModelPtr..."
    MOV dword ptr [0x01d046a0],EDI      ; 00547838 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 0054783e | DAT_01d046a4
    CALL FUN_004e4500                   ; 00547844
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00547849
    MOV EAX,dword ptr [EBX + 0x22b0]    ; 0054784c
        ;   Label: LAB_0054784c
    POP EBP                             ; 00547852
    POP EDI                             ; 00547853
    POP EBX                             ; 00547854
    RET                                 ; 00547855
    PUSH ESI                            ; 00547856
        ;   Label: LAB_00547856
    LEA EAX,[EBX + 0x2260]              ; 00547857
    PUSH EAX                            ; 0054785d
    MOV ECX,0x5e745a                    ; 0054785e | = "..\\core\\skeleton.cpp"
    MOV ESI,0xde2                       ; 00547863
    PUSH 0x5e746f                       ; 00547868 | = "Tried to do something with model %s, ..."
    MOV dword ptr [0x01d046a0],ECX      ; 0054786d | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 00547873 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00547879
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x8                         ; 0054787e
    POP ESI                             ; 00547881
    MOV EAX,dword ptr [EBX + 0x22b0]    ; 00547882
    POP EBP                             ; 00547888
    POP EDI                             ; 00547889
    POP EBX                             ; 0054788a
    RET                                 ; 0054788b

