; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_mission_cpp_FUN_0051a2d0(int param_1)
;
;
; XREF[1]:
;   core_main.c_FUN_005032a0 at 005038d7
;
; Referenced Globals:
;   TerminatedCString s_fangs_005e9073
;   undefined4 s_angs_005e9073+1
;   undefined4 s_ngs_005e9073+2
;   undefined4 s_gs_005e9073+3
;   undefined4 DAT_01d33b20
;   undefined4 DAT_01d33b88
;   undefined4 DAT_01d33b89
;   undefined4 DAT_01d33b8a
;   undefined4 DAT_01d33b8b
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0051a2d0
        ;   Label: core_mission.cpp_FUN_0051a2d0
    PUSH EDI                            ; 0051a2d1
    MOV EDX,dword ptr [ESP + 0xc]       ; 0051a2d2
    MOV dword ptr [EDX + 0x1008],0x0    ; 0051a2d6
    MOV dword ptr [EDX + 0x1118],0x0    ; 0051a2e0
    MOV dword ptr [EDX + 0x111c],0x0    ; 0051a2ea
    LEA EAX,[EDX + 0x1120]              ; 0051a2f4
    MOV dword ptr [EDX + 0x112c],0xffffffff ; 0051a2fa
    MOV ESI,0x5e9073                    ; 0051a304 | = "fangs"
    MOV dword ptr [EAX + 0x8],0x0       ; 0051a309
    MOV EDI,0x1d33b88                   ; 0051a310
    MOV ECX,dword ptr [EAX + 0x8]       ; 0051a315
    MOV dword ptr [EAX + 0x4],ECX       ; 0051a318
    MOV ECX,dword ptr [EAX + 0x4]       ; 0051a31b
    MOV dword ptr [EAX],ECX             ; 0051a31e
    MOV byte ptr [EDX + 0x1018],0x0     ; 0051a320
    XOR AH,AH                           ; 0051a327
    MOV dword ptr [EDX + 0x1130],0x0    ; 0051a329
    MOV byte ptr [0x01d33b20],AH        ; 0051a333 | DAT_01d33b20
    PUSH EDI                            ; 0051a339
    MOV AL,byte ptr [ESI]               ; 0051a33a | = "fangs" | s_ngs_005e9073+2
        ;   Label: LAB_0051a33a
    MOV byte ptr [EDI],AL               ; 0051a33c | DAT_01d33b88 | DAT_01d33b8a
    CMP AL,0x0                          ; 0051a33e
    JZ 0x0051a352                       ; 0051a340
        ;   XREF to: 0051a352 (CONDITIONAL_JUMP)  ; LAB_0051a352
    MOV AL,byte ptr [ESI + 0x1]         ; 0051a342 | s_angs_005e9073+1 | s_gs_005e9073+3
    ADD ESI,0x2                         ; 0051a345
    MOV byte ptr [EDI + 0x1],AL         ; 0051a348 | DAT_01d33b89 | DAT_01d33b8b
    ADD EDI,0x2                         ; 0051a34b
    CMP AL,0x0                          ; 0051a34e
    JNZ 0x0051a33a                      ; 0051a350
        ;   XREF to: 0051a33a (CONDITIONAL_JUMP)  ; LAB_0051a33a
    POP EDI                             ; 0051a352
        ;   Label: LAB_0051a352
    MOV dword ptr [EDX + 0x1454],0xffffffff ; 0051a353
    MOV dword ptr [EDX + 0x1010],0x0    ; 0051a35d
    MOV dword ptr [EDX + 0x1458],0x0    ; 0051a367
    MOV dword ptr [EDX + 0x145c],0x0    ; 0051a371
    MOV dword ptr [EDX + 0x100c],0xffffffff ; 0051a37b
    MOV dword ptr [EDX + 0x1014],0x0    ; 0051a385
    POP EDI                             ; 0051a38f
    POP ESI                             ; 0051a390
    RET                                 ; 0051a391

