; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void dll_dx7_cpp_FUN_10002370(void)
;
;
; XREF[4]:
;   dll_dx7.cpp_APIDLLinit_FUN_10001a80 at 10001cc5
;   dll_dx7.cpp_APIDLLkill_FUN_10002460 at 10002460
;   dll_dx7.cpp_APIDLLrestoreVideoMode_FUN_10002be0 at 10002c2c
;   dll_dx7.cpp_APIDLLsetVideoMode_FUN_10002500 at 100026c4
;
; Referenced Globals:
;   IDirectDrawSurface* g_PrimarySurface = 00000000
;   undefined4 DAT_10014190
;   undefined4 DAT_10014198
;   undefined4 DAT_1001419c
;   undefined4 DAT_100141b8
;   undefined4 DAT_100141dc
;   IDirect3DDevice3* g_Device = 00000000
;   undefined4 DAT_100141e4
;   undefined4 DAT_10226a48
;
; Called Functions:
;   dll_dx7.cpp_FUN_10002ea0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 10002370
        ;   Label: dll_dx7.cpp_FUN_10002370
    PUSH EDI                            ; 10002371
    CALL dll_dx7.cpp_FUN_10002ea0       ; 10002372
        ;   XREF to: 10002ea0 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_10002ea0()
    CMP dword ptr [0x100141b8],0x0      ; 10002377 | DAT_100141b8
    JZ 0x10002395                       ; 1000237e
        ;   XREF to: 10002395 (CONDITIONAL_JUMP)  ; LAB_10002395
    MOV EAX,[0x100141b8]                ; 10002380 | DAT_100141b8
    PUSH EAX                            ; 10002385
    MOV ESI,dword ptr [EAX]             ; 10002386
    CALL dword ptr [ESI + 0x8]          ; 10002388
    MOV dword ptr [0x100141b8],0x0      ; 1000238b | DAT_100141b8
    CMP dword ptr [0x100141e4],0x0      ; 10002395 | DAT_100141e4
        ;   Label: LAB_10002395
    JZ 0x100023b3                       ; 1000239c
        ;   XREF to: 100023b3 (CONDITIONAL_JUMP)  ; LAB_100023b3
    MOV EAX,[0x100141e4]                ; 1000239e | DAT_100141e4
    PUSH EAX                            ; 100023a3
    MOV ESI,dword ptr [EAX]             ; 100023a4
    CALL dword ptr [ESI + 0x8]          ; 100023a6
    MOV dword ptr [0x100141e4],0x0      ; 100023a9 | DAT_100141e4
    CMP dword ptr [0x100141e0],0x0      ; 100023b3 | g_Device
        ;   Label: LAB_100023b3
    JZ 0x100023d1                       ; 100023ba
        ;   XREF to: 100023d1 (CONDITIONAL_JUMP)  ; LAB_100023d1
    MOV EAX,[0x100141e0]                ; 100023bc | g_Device
    PUSH EAX                            ; 100023c1
    MOV ESI,dword ptr [EAX]             ; 100023c2
    CALL dword ptr [ESI + 0x8]          ; 100023c4
    MOV dword ptr [0x100141e0],0x0      ; 100023c7 | g_Device
    CMP dword ptr [0x100141dc],0x0      ; 100023d1 | DAT_100141dc
        ;   Label: LAB_100023d1
    JZ 0x100023ef                       ; 100023d8
        ;   XREF to: 100023ef (CONDITIONAL_JUMP)  ; LAB_100023ef
    MOV EAX,[0x100141dc]                ; 100023da | DAT_100141dc
    PUSH EAX                            ; 100023df
    MOV ESI,dword ptr [EAX]             ; 100023e0
    CALL dword ptr [ESI + 0x8]          ; 100023e2
    MOV dword ptr [0x100141dc],0x0      ; 100023e5 | DAT_100141dc
    CMP dword ptr [0x10014190],0x0      ; 100023ef | DAT_10014190
        ;   Label: LAB_100023ef
    JZ 0x1000240d                       ; 100023f6
        ;   XREF to: 1000240d (CONDITIONAL_JUMP)  ; LAB_1000240d
    MOV EAX,[0x10014190]                ; 100023f8 | DAT_10014190
    PUSH EAX                            ; 100023fd
    MOV ESI,dword ptr [EAX]             ; 100023fe
    CALL dword ptr [ESI + 0x8]          ; 10002400
    MOV dword ptr [0x10014190],0x0      ; 10002403 | DAT_10014190
    XOR ESI,ESI                         ; 1000240d
        ;   Label: LAB_1000240d
    CMP dword ptr [0x10226a48],ESI      ; 1000240f | DAT_10226a48
    JLE 0x1000243a                      ; 10002415
        ;   XREF to: 1000243a (CONDITIONAL_JUMP)  ; LAB_1000243a
    MOV EDI,0x10014198                  ; 10002417 | DAT_10014198
    MOV EAX,dword ptr [EDI]             ; 1000241c | DAT_10014198 | DAT_1001419c
        ;   Label: LAB_1000241c
    TEST EAX,EAX                        ; 1000241e
    JZ 0x1000242e                       ; 10002420
        ;   XREF to: 1000242e (CONDITIONAL_JUMP)  ; LAB_1000242e
    PUSH EAX                            ; 10002422
    MOV EAX,dword ptr [EAX]             ; 10002423
    CALL dword ptr [EAX + 0x8]          ; 10002425
    MOV dword ptr [EDI],0x0             ; 10002428 | DAT_10014198
    ADD EDI,0x4                         ; 1000242e
        ;   Label: LAB_1000242e
    INC ESI                             ; 10002431
    CMP dword ptr [0x10226a48],ESI      ; 10002432 | DAT_10226a48
    JG 0x1000241c                       ; 10002438
        ;   XREF to: 1000241c (CONDITIONAL_JUMP)  ; LAB_1000241c
    CMP dword ptr [0x1001418c],0x0      ; 1000243a | g_PrimarySurface
        ;   Label: LAB_1000243a
    JZ 0x10002458                       ; 10002441
        ;   XREF to: 10002458 (CONDITIONAL_JUMP)  ; LAB_10002458
    MOV EAX,[0x1001418c]                ; 10002443 | g_PrimarySurface
    PUSH EAX                            ; 10002448
    MOV ESI,dword ptr [EAX]             ; 10002449
    CALL dword ptr [ESI + 0x8]          ; 1000244b
    MOV dword ptr [0x1001418c],0x0      ; 1000244e | g_PrimarySurface
    POP EDI                             ; 10002458
        ;   Label: LAB_10002458
    POP ESI                             ; 10002459
    RET                                 ; 1000245a

