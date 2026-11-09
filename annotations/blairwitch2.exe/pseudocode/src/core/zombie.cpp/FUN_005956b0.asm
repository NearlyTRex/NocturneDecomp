; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_zombie_cpp_FUN_005956b0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005eee02
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005956b0
        ;   Label: core_zombie.cpp_FUN_005956b0
    SUB ESP,0x4c                        ; 005956b1
    MOV ESI,dword ptr [ESP + 0x54]      ; 005956b4
    MOV dword ptr [ESP + 0x48],0x3f800000 ; 005956b8
    TEST ESI,ESI                        ; 005956c0
    JNZ 0x005956cd                      ; 005956c2
        ;   XREF to: 005956cd (CONDITIONAL_JUMP)  ; LAB_005956cd
    MOV EAX,dword ptr [ESP + 0x48]      ; 005956c4
    ADD ESP,0x4c                        ; 005956c8
    POP ESI                             ; 005956cb
    RET                                 ; 005956cc
    PUSH EDI                            ; 005956cd
        ;   Label: LAB_005956cd
    PUSH ESI                            ; 005956ce
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 005956cf
    LEA ESI,[ESP + 0x20]                ; 005956d5
    LEA EDI,[ESP + 0x8]                 ; 005956d9
    CALL dword ptr [EAX + 0x24]         ; 005956dd
    MOV ECX,0x6                         ; 005956e0
    LEA ESI,[ESP + 0x20]                ; 005956e5
    ADD ESP,0x4                         ; 005956e9
    LEA EAX,[ESP + 0x4]                 ; 005956ec
    MOVSD.REP ES:EDI,ESI                ; 005956f0
    FLD float ptr [EAX + 0xc]           ; 005956f2
    FLD float ptr [EAX + 0x10]          ; 005956f5
    FLD float ptr [EAX + 0x14]          ; 005956f8
    LEA EDI,[ESP + 0x40]                ; 005956fb
    LEA ESI,[ESP + 0x34]                ; 005956ff
    FXCH ST2                            ; 00595703
    FSUB float ptr [ESP + 0x4]          ; 00595705
    FXCH                                ; 00595709
    FSUB float ptr [ESP + 0x8]          ; 0059570b
    FXCH ST2                            ; 0059570f
    FSUB float ptr [ESP + 0xc]          ; 00595711
    FXCH                                ; 00595715
    FSTP float ptr [ESP + 0x34]         ; 00595717
    FXCH                                ; 0059571b
    FSTP float ptr [ESP + 0x38]         ; 0059571d
    FSTP float ptr [ESP + 0x3c]         ; 00595721
    MOVSD ES:EDI,ESI                    ; 00595725
    MOVSD ES:EDI,ESI                    ; 00595726
    MOVSD ES:EDI,ESI                    ; 00595727
    FLD float ptr [ESP + 0x48]          ; 00595728
    FMUL double ptr [0x005eee02]        ; 0059572c | DAT_005eee02
    FLD1                                ; 00595732
    FADDP                               ; 00595734
    FSTP float ptr [ESP + 0x4c]         ; 00595736
    POP EDI                             ; 0059573a
    MOV EAX,dword ptr [ESP + 0x48]      ; 0059573b
    ADD ESP,0x4c                        ; 0059573f
    POP ESI                             ; 00595742
    RET                                 ; 00595743

