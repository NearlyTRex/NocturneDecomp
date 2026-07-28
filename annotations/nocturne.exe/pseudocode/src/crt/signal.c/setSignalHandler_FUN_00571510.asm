; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SIGNAL_HANDLER_TYPE __watcallStack crt_signal_c_setSignalHandler_FUN_00571510(int signal_number,SIGNAL_HANDLER_TYPE new_handler_type)
;
; Parameters:
; int              Stack[0x4]:4   signal_number
; SIGNAL_HANDLER_TYPE Stack[0x8]:4   new_handler_type
;
; XREF[4]:
;   FUN_00571718 at 00571782
;   FUN_0057189c at 005718ae
;   crt_signal.c_processSignal_FUN_005717d8 at 00571827
;   crt_signal.c_raiseFPE_FUN_005716d8 at 005716f8
;
; Referenced Globals:
;   void* PTR_crt_thread.c_GetTLS_FUN_005671dc_005c1abc = 005671dc
;   undefined4 DAT_005c20d8
;
; Called Functions:
;   crt_thread.c_GetTLS_FUN_005671dc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00571510
        ;   Label: crt_signal.c_setSignalHandler_FUN_00571510
    PUSH ESI                            ; 00571511
    MOV EBX,dword ptr [ESP + 0xc]       ; 00571512
    CMP EBX,0x7                         ; 00571516
    JZ 0x00571520                       ; 00571519
        ;   XREF to: 00571520 (CONDITIONAL_JUMP)  ; LAB_00571520
    CMP EBX,0x4                         ; 0057151b
    JNZ 0x0057153c                      ; 0057151e
        ;   XREF to: 0057153c (CONDITIONAL_JUMP)  ; LAB_0057153c
    LEA EAX,[EBX*0x8 + 0x0]             ; 00571520
        ;   Label: LAB_00571520
    MOV ESI,dword ptr [ESP + 0x10]      ; 00571527
    MOV EBX,dword ptr [EAX + 0x5c20d8]  ; 0057152b | DAT_005c20d8
    MOV dword ptr [EAX + 0x5c20d8],ESI  ; 00571531 | DAT_005c20d8
    MOV EAX,EBX                         ; 00571537
    POP ESI                             ; 00571539
    POP EBX                             ; 0057153a
    RET                                 ; 0057153b
    LEA ESI,[EBX*0x8 + 0x0]             ; 0057153c
        ;   Label: LAB_0057153c
    CALL dword ptr [0x005c1abc]         ; 00571543 | PTR_crt_thread.c_GetTLS_FUN_005671dc_005c1abc
    MOV EBX,dword ptr [ESI + EAX*0x1 + 0x58] ; 00571549
    CALL dword ptr [0x005c1abc]         ; 0057154d | PTR_crt_thread.c_GetTLS_FUN_005671dc_005c1abc
    ADD EAX,ESI                         ; 00571553
    MOV ESI,dword ptr [ESP + 0x10]      ; 00571555
    MOV dword ptr [EAX + 0x58],ESI      ; 00571559
    MOV EAX,EBX                         ; 0057155c
    POP ESI                             ; 0057155e
    POP EBX                             ; 0057155f
    RET                                 ; 00571560

