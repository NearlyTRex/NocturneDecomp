; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00447860(int *param_1)
;
;
; XREF[2]:
;   FUN_004478d0 at 004479c2
;   FUN_00447ad0 at 00447bb8
;
; Referenced Globals:
;   TerminatedCString s_core_dfilter_cpp_005ceb2b
;   TerminatedCString s_CDemonFilter_allocMemory_005ceb3f
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004478b0
;   FUN_004e4500
;   FUN_005b8580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00447860
        ;   Label: FUN_00447860
    MOV EBX,dword ptr [ESP + 0x8]       ; 00447861
    PUSH EBX                            ; 00447865
    CALL FUN_004478b0                   ; 00447866
        ;   XREF to: 004478b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004478b0()
    MOV EAX,dword ptr [EBX]             ; 0044786b
    IMUL EAX,dword ptr [EBX + 0x4]      ; 0044786d
    ADD ESP,0x4                         ; 00447871
    PUSH EAX                            ; 00447874
    CALL FUN_005b8580                   ; 00447875
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8580()
    ADD ESP,0x4                         ; 0044787a
    MOV dword ptr [EBX + 0x48],EAX      ; 0044787d
    TEST EAX,EAX                        ; 00447880
    JZ 0x00447886                       ; 00447882
        ;   XREF to: 00447886 (CONDITIONAL_JUMP)  ; LAB_00447886
    POP EBX                             ; 00447884
    RET                                 ; 00447885
    PUSH ESI                            ; 00447886
        ;   Label: LAB_00447886
    MOV EBX,0x5ceb2b                    ; 00447887 | = "..\\core\\dfilter.cpp"
    MOV ESI,0x8d                        ; 0044788c
    PUSH 0x5ceb3f                       ; 00447891 | = "CDemonFilter::allocMemory - Out of me..."
    MOV dword ptr [0x01d046a0],EBX      ; 00447896 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0044789c | DAT_01d046a4
    CALL FUN_004e4500                   ; 004478a2
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004478a7
    POP ESI                             ; 004478aa
    POP EBX                             ; 004478ab
    RET                                 ; 004478ac

