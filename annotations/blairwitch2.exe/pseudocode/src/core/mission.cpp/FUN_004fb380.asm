; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_mission_cpp_FUN_004fb380(int param_1)
;
;
; XREF[1]:
;   core_main.c_FUN_004e46c0 at 004e4cc7
;
; Referenced Globals:
;   undefined4 s_test_logo_005de02b+1
;   undefined4 s_test_logo_005de02b+2
;   undefined4 s_test_logo_005de02b+3
;   undefined4 s_test_logo_005de02b+4
;   undefined4 DAT_01d1c630
;   undefined4 DAT_01d1c698
;   undefined4 DAT_01d1c699
;   undefined4 DAT_01d1c69a
;   undefined4 DAT_01d1c69b
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004fb380
        ;   Label: core_mission.cpp_FUN_004fb380
    PUSH EDI                            ; 004fb381
    MOV EDX,dword ptr [ESP + 0xc]       ; 004fb382
    MOV dword ptr [EDX + 0x1008],0x0    ; 004fb386
    MOV dword ptr [EDX + 0x1114],0x0    ; 004fb390
    MOV dword ptr [EDX + 0x1118],0x0    ; 004fb39a
    LEA EAX,[EDX + 0x111c]              ; 004fb3a4
    MOV dword ptr [EDX + 0x1128],0xffffffff ; 004fb3aa
    MOV ESI,0x5de02c                    ; 004fb3b4 | s_test_logo_005de02b+1
    MOV dword ptr [EAX + 0x8],0x0       ; 004fb3b9
    MOV EDI,0x1d1c698                   ; 004fb3c0
    MOV ECX,dword ptr [EAX + 0x8]       ; 004fb3c5
    MOV dword ptr [EAX + 0x4],ECX       ; 004fb3c8
    MOV ECX,dword ptr [EAX + 0x4]       ; 004fb3cb
    MOV dword ptr [EAX],ECX             ; 004fb3ce
    MOV byte ptr [EDX + 0x1014],0x0     ; 004fb3d0
    XOR AH,AH                           ; 004fb3d7
    MOV dword ptr [EDX + 0x112c],0x0    ; 004fb3d9
    MOV byte ptr [0x01d1c630],AH        ; 004fb3e3 | DAT_01d1c630
    PUSH EDI                            ; 004fb3e9
    MOV AL,byte ptr [ESI]               ; 004fb3ea | s_test_logo_005de02b+1 | s_test_logo_005de02b+3
        ;   Label: LAB_004fb3ea
    MOV byte ptr [EDI],AL               ; 004fb3ec | DAT_01d1c698 | DAT_01d1c69a
    CMP AL,0x0                          ; 004fb3ee
    JZ 0x004fb402                       ; 004fb3f0
        ;   XREF to: 004fb402 (CONDITIONAL_JUMP)  ; LAB_004fb402
    MOV AL,byte ptr [ESI + 0x1]         ; 004fb3f2 | s_test_logo_005de02b+2 | s_test_logo_005de02b+4
    ADD ESI,0x2                         ; 004fb3f5
    MOV byte ptr [EDI + 0x1],AL         ; 004fb3f8 | DAT_01d1c699 | DAT_01d1c69b
    ADD EDI,0x2                         ; 004fb3fb
    CMP AL,0x0                          ; 004fb3fe
    JNZ 0x004fb3ea                      ; 004fb400
        ;   XREF to: 004fb3ea (CONDITIONAL_JUMP)  ; LAB_004fb3ea
    POP EDI                             ; 004fb402
        ;   Label: LAB_004fb402
    MOV dword ptr [EDX + 0x1450],0xffffffff ; 004fb403
    MOV dword ptr [EDX + 0x1010],0x0    ; 004fb40d
    MOV dword ptr [EDX + 0x1454],0x0    ; 004fb417
    MOV dword ptr [EDX + 0x1458],0x0    ; 004fb421
    MOV dword ptr [EDX + 0x100c],0xffffffff ; 004fb42b
    POP EDI                             ; 004fb435
    POP ESI                             ; 004fb436
    RET                                 ; 004fb437

