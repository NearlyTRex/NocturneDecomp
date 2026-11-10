; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl crt_stdio_c_fgets_FUN_005b9600(char *param_1,int param_2,int param_3)
;
;
; XREF[20]:
;   core_box.cpp_CBox_loadFromFile_FUN_005b4300 at 005b4322
;   core_cloth.cpp_CCloth_load_FUN_005adeb0 at 005adeff
;   core_dcamera.cpp_loadCameraFog_FUN_00443400 at 00443421
;   core_event.cpp_CEventList_loadState_FUN_00491ca0 at 00491ccc
;   core_fire.cpp_CFireEffect_load_FUN_0049ea80 at 0049eab4
;   core_fldnotes.cpp_FUN_004a41b0 at 004a42bd
;   core_game.cpp_CGame_rollCredits_FUN_004be430 at 004be4ec
;   core_game.cpp_FUN_004bbf70 at 004bc37a
;   core_gore.cpp_CGore_load_FUN_004c9e70 at 004c9e8c
;   core_inv.cpp_CInventory_load_FUN_004dc4b0 at 004dc4ec
;   ... and 10 more
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2a8 = 005bce04
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2ac = 005bce04
;
; Called Functions:
;   crt_stdio.c_fgetc_FUN_005b8180
;   crt_unknown.c_FUN_005bce04
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b9600
        ;   Label: crt_stdio.c_fgets_FUN_005b9600
    PUSH ESI                            ; 005b9601
    PUSH EDI                            ; 005b9602
    PUSH EBP                            ; 005b9603
    SUB ESP,0x8                         ; 005b9604
    MOV EBP,dword ptr [ESP + 0x1c]      ; 005b9607
    MOV ESI,dword ptr [ESP + 0x20]      ; 005b960b
    MOV EDI,dword ptr [ESP + 0x24]      ; 005b960f
    MOV EDX,dword ptr [EDI + 0x10]      ; 005b9613
    PUSH EDX                            ; 005b9616
    CALL dword ptr [0x0061f2a8]         ; 005b9617 | PTR_crt_unknown.c_FUN_005bce04_0061f2a8
    MOV EAX,dword ptr [EDI + 0xc]       ; 005b961d
    ADD ESP,0x4                         ; 005b9620
    AND EAX,0x30                        ; 005b9623
    MOV dword ptr [ESP + 0x4],EAX       ; 005b9626
    MOV AH,byte ptr [EDI + 0xc]         ; 005b962a
    AND AH,0xcf                         ; 005b962d
    MOV EBX,EBP                         ; 005b9630
    MOV byte ptr [EDI + 0xc],AH         ; 005b9632
    DEC ESI                             ; 005b9635
        ;   Label: LAB_005b9635
    TEST ESI,ESI                        ; 005b9636
    JLE 0x005b9656                      ; 005b9638
        ;   XREF to: 005b9656 (CONDITIONAL_JUMP)  ; LAB_005b9656
    PUSH EDI                            ; 005b963a
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 005b963b
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005b8180()
    ADD ESP,0x4                         ; 005b9640
    MOV dword ptr [ESP],EAX             ; 005b9643
    CMP EAX,-0x1                        ; 005b9646
    JZ 0x005b9656                       ; 005b9649
        ;   XREF to: 005b9656 (CONDITIONAL_JUMP)  ; LAB_005b9656
    INC EBX                             ; 005b964b
    MOV AL,byte ptr [ESP]               ; 005b964c
    MOV byte ptr [EBX + -0x1],AL        ; 005b964f
    CMP AL,0xa                          ; 005b9652
    JNZ 0x005b9635                      ; 005b9654
        ;   XREF to: 005b9635 (CONDITIONAL_JUMP)  ; LAB_005b9635
    CMP dword ptr [ESP],-0x1            ; 005b9656
        ;   Label: LAB_005b9656
    JNZ 0x005b966a                      ; 005b965a
        ;   XREF to: 005b966a (CONDITIONAL_JUMP)  ; LAB_005b966a
    CMP EBX,EBP                         ; 005b965c
    JZ 0x005b9666                       ; 005b965e
        ;   XREF to: 005b9666 (CONDITIONAL_JUMP)  ; LAB_005b9666
    TEST byte ptr [EDI + 0xc],0x20      ; 005b9660
    JZ 0x005b966a                       ; 005b9664
        ;   XREF to: 005b966a (CONDITIONAL_JUMP)  ; LAB_005b966a
    XOR EBP,EBP                         ; 005b9666
        ;   Label: LAB_005b9666
    JMP 0x005b966d                      ; 005b9668
        ;   XREF to: 005b966d (UNCONDITIONAL_JUMP)  ; LAB_005b966d
    MOV byte ptr [EBX],0x0              ; 005b966a
        ;   Label: LAB_005b966a
    MOV EAX,dword ptr [ESP + 0x4]       ; 005b966d
        ;   Label: LAB_005b966d
    MOV ESI,dword ptr [EDI + 0xc]       ; 005b9671
    OR ESI,EAX                          ; 005b9674
    MOV EAX,dword ptr [EDI + 0x10]      ; 005b9676
    PUSH EAX                            ; 005b9679
    MOV dword ptr [EDI + 0xc],ESI       ; 005b967a
    CALL dword ptr [0x0061f2ac]         ; 005b967d | PTR_crt_unknown.c_FUN_005bce04_0061f2ac
    ADD ESP,0x4                         ; 005b9683
    MOV EAX,EBP                         ; 005b9686
    ADD ESP,0x8                         ; 005b9688
    POP EBP                             ; 005b968b
    POP EDI                             ; 005b968c
    POP ESI                             ; 005b968d
    POP EBX                             ; 005b968e
    RET                                 ; 005b968f

