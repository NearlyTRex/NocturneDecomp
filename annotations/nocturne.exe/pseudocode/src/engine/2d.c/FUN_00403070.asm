; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00403070(undefined4 param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0057718c
;   undefined4 DAT_0057718f
;   undefined4 DAT_00577193
;   undefined4 DAT_00577196
;   string s_..\\engine\\2d.c_0057719a
;   string s_Unable_to_read_fog_table._005771a9
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fread_FUN_005636d0
;   engine_dosio.cpp_getFile_FUN_00456a60
;   FUN_00402e90
;   FUN_00403130
;   FUN_004c8440
;   wincore_windll.cpp_setFogColorFromPalette_FUN_00532a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403070
        ;   Label: FUN_00403070
    PUSH EDI                            ; 00403071
    MOV EDI,dword ptr [ESP + 0xc]       ; 00403072
    MOV EBX,dword ptr [ESP + 0x10]      ; 00403076
    PUSH ESI                            ; 0040307a
    PUSH 0x57718c                       ; 0040307b | DAT_0057718c
    PUSH EDI                            ; 00403080
    PUSH 0x57718f                       ; 00403081 | DAT_0057718f
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 00403086
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_getFile_FUN_00456a60()
    ADD ESP,0xc                         ; 0040308b
    MOV ESI,EAX                         ; 0040308e
    TEST EAX,EAX                        ; 00403090
    JZ 0x004030e5                       ; 00403092
        ;   XREF to: 004030e5 (CONDITIONAL_JUMP)  ; LAB_004030e5
    TEST ESI,ESI                        ; 00403094
        ;   Label: LAB_00403094
    JZ 0x0040310e                       ; 00403096
        ;   XREF to: 0040310e (CONDITIONAL_JUMP)  ; LAB_0040310e
    PUSH ESI                            ; 00403098
    PUSH 0x10                           ; 00403099
    PUSH 0x100                          ; 0040309b
    PUSH 0x1bd1ea0                      ; 004030a0
    CALL crt_stdio.c_fread_FUN_005636d0 ; 004030a5
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005636d0()
    ADD ESP,0x10                        ; 004030aa
    PUSH ESI                            ; 004030ad
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004030ae
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_00563380()
    ADD ESP,0x4                         ; 004030b3
        ;   Label: LAB_004030b3
    XOR EAX,EAX                         ; 004030b6
    POP ESI                             ; 004030b8
    INC EAX                             ; 004030b9
        ;   Label: LAB_004030b9
    MOV byte ptr [EAX + 0x1bd2d9f],BL   ; 004030ba
    MOV DL,byte ptr [EAX + 0x1bd1e9f]   ; 004030c0
    MOV byte ptr [EAX + 0x1bd2e9f],BL   ; 004030c6
    MOV byte ptr [EAX + 0x1bd1d9f],DL   ; 004030cc
    CMP EAX,0x100                       ; 004030d2
    JL 0x004030b9                       ; 004030d7
        ;   XREF to: 004030b9 (CONDITIONAL_JUMP)  ; LAB_004030b9
    PUSH EBX                            ; 004030d9
    CALL wincore_windll.cpp_setFogColorFromPalette_FUN_00532a80 ; 004030da
        ;   XREF to: 00532a80 (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_setFogColorFromPalette_FUN_00532a80()
    ADD ESP,0x4                         ; 004030df
    POP EDI                             ; 004030e2
    POP EBX                             ; 004030e3
    RET                                 ; 004030e4
    PUSH EBX                            ; 004030e5
        ;   Label: LAB_004030e5
    CALL FUN_00402e90                   ; 004030e6
        ;   XREF to: 00402e90 (UNCONDITIONAL_CALL)  ; undefined FUN_00402e90()
    ADD ESP,0x4                         ; 004030eb
    PUSH EDI                            ; 004030ee
    CALL FUN_00403130                   ; 004030ef
        ;   XREF to: 00403130 (UNCONDITIONAL_CALL)  ; undefined FUN_00403130()
    ADD ESP,0x4                         ; 004030f4
    PUSH 0x577193                       ; 004030f7 | DAT_00577193
    PUSH EDI                            ; 004030fc
    PUSH 0x577196                       ; 004030fd | DAT_00577196
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 00403102
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_getFile_FUN_00456a60()
    ADD ESP,0xc                         ; 00403107
    MOV ESI,EAX                         ; 0040310a
    JMP 0x00403094                      ; 0040310c
        ;   XREF to: 00403094 (UNCONDITIONAL_JUMP)  ; LAB_00403094
    MOV EDX,0x57719a                    ; 0040310e | = "..\\engine\\2d.c"
        ;   Label: LAB_0040310e
    MOV ECX,0x69c                       ; 00403113
    PUSH 0x5771a9                       ; 00403118 | = "Unable to read fog table."
    MOV dword ptr [0x01cc4800],EDX      ; 0040311d | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 00403123 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00403129
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    JMP 0x004030b3                      ; 0040312e
        ;   XREF to: 004030b3 (UNCONDITIONAL_JUMP)  ; LAB_004030b3

