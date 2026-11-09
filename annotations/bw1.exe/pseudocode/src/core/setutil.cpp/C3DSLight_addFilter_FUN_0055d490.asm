; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setutil_cpp_C3DSLight_addFilter_FUN_0055d490(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00544460 at 00545e20
;
; Referenced Globals:
;   TerminatedCString s_core_setutil_cpp_005f1432
;   TerminatedCString s_C3DSLight_addFilter_too_005f1446
;   CFilterCache* g_CFilterCachePtr = 0152c72c
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_dfilter.cpp_FUN_0045d7c0
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055d490
        ;   Label: core_setutil.cpp_C3DSLight_addFilter_FUN_0055d490
    PUSH ESI                            ; 0055d491
    PUSH EDI                            ; 0055d492
    PUSH EBP                            ; 0055d493
    MOV EBX,dword ptr [ESP + 0x14]      ; 0055d494
    CMP dword ptr [EBX + 0x11ec],0x20   ; 0055d498
    JGE 0x0055d54a                      ; 0055d49f
        ;   XREF to: 0055d54a (CONDITIONAL_JUMP)  ; LAB_0055d54a
    MOV EDX,dword ptr [EBX + 0x11ec]    ; 0055d4a5
        ;   Label: LAB_0055d4a5
    LEA EAX,[EDX*0x4 + 0x0]             ; 0055d4ab
    ADD EAX,EDX                         ; 0055d4b2
    LEA ECX,[EBX + 0x11f4]              ; 0055d4b4
    SHL EAX,0x3                         ; 0055d4ba
    MOV ESI,dword ptr [ESP + 0x18]      ; 0055d4bd
    LEA EDI,[ECX + EAX*0x1]             ; 0055d4c1
    PUSH EDI                            ; 0055d4c4
    MOV AL,byte ptr [ESI]               ; 0055d4c5
        ;   Label: LAB_0055d4c5
    MOV byte ptr [EDI],AL               ; 0055d4c7
    CMP AL,0x0                          ; 0055d4c9
    JZ 0x0055d4dd                       ; 0055d4cb
        ;   XREF to: 0055d4dd (CONDITIONAL_JUMP)  ; LAB_0055d4dd
    MOV AL,byte ptr [ESI + 0x1]         ; 0055d4cd
    ADD ESI,0x2                         ; 0055d4d0
    MOV byte ptr [EDI + 0x1],AL         ; 0055d4d3
    ADD EDI,0x2                         ; 0055d4d6
    CMP AL,0x0                          ; 0055d4d9
    JNZ 0x0055d4c5                      ; 0055d4db
        ;   XREF to: 0055d4c5 (CONDITIONAL_JUMP)  ; LAB_0055d4c5
    POP EDI                             ; 0055d4dd
        ;   Label: LAB_0055d4dd
    MOV EAX,dword ptr [EBX + 0x11ec]    ; 0055d4de
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0055d4e4
    MOV dword ptr [EBX + EAX*0x4 + 0x16f4],EDX ; 0055d4e8
    MOV EAX,dword ptr [EBX + 0x11ec]    ; 0055d4ef
    MOV EDX,dword ptr [ESP + 0x20]      ; 0055d4f5
    MOV dword ptr [EBX + EAX*0x4 + 0x1774],EDX ; 0055d4f9
    MOV EDX,dword ptr [EBX + 0x11ec]    ; 0055d500
    LEA EAX,[EDX*0x4 + 0x0]             ; 0055d506
    ADD EAX,EDX                         ; 0055d50d
    MOV EDI,dword ptr [EBX + 0x11f0]    ; 0055d50f
    SHL EAX,0x3                         ; 0055d515
    PUSH EDI                            ; 0055d518
    ADD ECX,EAX                         ; 0055d519
    PUSH ECX                            ; 0055d51b
    MOV EBP,dword ptr [0x00611358]      ; 0055d51c | g_CFilterCachePtr
    PUSH EBP                            ; 0055d522
    CALL core_dfilter.cpp_FUN_0045d7c0  ; 0055d523
        ;   XREF to: 0045d7c0 (UNCONDITIONAL_CALL)  ; undefined core_dfilter.cpp_FUN_0045d7c0()
    MOV EDX,dword ptr [EBX + 0x11ec]    ; 0055d528
    MOV dword ptr [EBX + EDX*0x4 + 0x1810],EAX ; 0055d52e
    MOV EAX,dword ptr [EBX + 0x11ec]    ; 0055d535
    INC EAX                             ; 0055d53b
    ADD ESP,0xc                         ; 0055d53c
    MOV dword ptr [EBX + 0x11ec],EAX    ; 0055d53f
    POP EBP                             ; 0055d545
    POP EDI                             ; 0055d546
    POP ESI                             ; 0055d547
    POP EBX                             ; 0055d548
    RET                                 ; 0055d549
    PUSH 0x20                           ; 0055d54a
        ;   Label: LAB_0055d54a
    MOV ECX,0x5f1432                    ; 0055d54c | = "..\\core\\setutil.cpp"
    MOV ESI,0x3b6                       ; 0055d551
    PUSH 0x5f1446                       ; 0055d556 | = "C3DSLight::addFilter - too many filte..."
    MOV dword ptr [0x01d1d400],ECX      ; 0055d55b | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0055d561 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0055d567
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 0055d56c
    JMP 0x0055d4a5                      ; 0055d56f
        ;   XREF to: 0055d4a5 (UNCONDITIONAL_JUMP)  ; LAB_0055d4a5

