; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_io_c__utime_FUN_0056cb60(char *filename,_utimbuf *timestamps)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; _utimbuf *       Stack[0x8]:4   timestamps
;
; XREF[1]:
;   crt_io.c__utime_00600c1e_FUN_00565dc6 at 00565dc6
;
; Called Functions:
;   crt_errno.c___set_errno_FUN_0056c73c
;   crt_time.c__localtime_FUN_005665e8
;   crt_time.c__time_FUN_00570a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056cb60
        ;   Label: crt_io.c__utime_FUN_0056cb60
    PUSH ESI                            ; 0056cb61
    PUSH EDI                            ; 0056cb62
    SUB ESP,0x48                        ; 0056cb63
    MOV EDI,dword ptr [ESP + 0x5c]      ; 0056cb66
    PUSH 0x0                            ; 0056cb6a
    PUSH 0x0                            ; 0056cb6c
    PUSH 0x3                            ; 0056cb6e
    PUSH 0x0                            ; 0056cb70
    PUSH 0x0                            ; 0056cb72
    PUSH 0xc0000000                     ; 0056cb74
    MOV EDX,dword ptr [ESP + 0x70]      ; 0056cb79
    PUSH EDX                            ; 0056cb7d
    CALL dword ptr CS:[0x575498]        ; 0056cb7e
    MOV EBX,EAX                         ; 0056cb85
    MOV ESI,EAX                         ; 0056cb87
    CMP EAX,-0x1                        ; 0056cb89
    JNZ 0x0056cb98                      ; 0056cb8c
        ;   XREF to: 0056cb98 (CONDITIONAL_JUMP)  ; LAB_0056cb98
    CALL crt_errno.c___set_errno_FUN_0056c73c ; 0056cb8e
        ;   XREF to: 0056c73c (UNCONDITIONAL_CALL)  ; DWORD crt_errno.c___set_errno_FUN_0056c73c()
    JMP 0x0056cccf                      ; 0056cb93
        ;   XREF to: 0056cccf (UNCONDITIONAL_JUMP)  ; LAB_0056cccf
    LEA EAX,[ESP + 0x20]                ; 0056cb98
        ;   Label: LAB_0056cb98
    PUSH EAX                            ; 0056cb9c
    LEA EAX,[ESP + 0x44]                ; 0056cb9d
    PUSH EAX                            ; 0056cba1
    LEA EAX,[ESP + 0x38]                ; 0056cba2
    PUSH EAX                            ; 0056cba6
    PUSH EBX                            ; 0056cba7
    CALL dword ptr CS:[0x575510]        ; 0056cba8
    TEST EAX,EAX                        ; 0056cbaf
    JNZ 0x0056cbc7                      ; 0056cbb1
        ;   XREF to: 0056cbc7 (CONDITIONAL_JUMP)  ; LAB_0056cbc7
    PUSH EBX                            ; 0056cbb3
    CALL dword ptr CS:[0x57548c]        ; 0056cbb4
    CALL crt_errno.c___set_errno_FUN_0056c73c ; 0056cbbb
        ;   XREF to: 0056c73c (UNCONDITIONAL_CALL)  ; DWORD crt_errno.c___set_errno_FUN_0056c73c()
    ADD ESP,0x48                        ; 0056cbc0
    POP EDI                             ; 0056cbc3
    POP ESI                             ; 0056cbc4
    POP EBX                             ; 0056cbc5
    RET                                 ; 0056cbc6
    TEST EDI,EDI                        ; 0056cbc7
        ;   Label: LAB_0056cbc7
    JNZ 0x0056cbe0                      ; 0056cbc9
        ;   XREF to: 0056cbe0 (CONDITIONAL_JUMP)  ; LAB_0056cbe0
    PUSH EDI                            ; 0056cbcb
    CALL crt_time.c__time_FUN_00570a30  ; 0056cbcc
        ;   XREF to: 00570a30 (UNCONDITIONAL_CALL)  ; time_t crt_time.c__time_FUN_00570a30(time_t * time)
    ADD ESP,0x4                         ; 0056cbd1
    LEA EDI,[ESP + 0x38]                ; 0056cbd4
    MOV dword ptr [ESP + 0x3c],EAX      ; 0056cbd8
    MOV dword ptr [ESP + 0x38],EAX      ; 0056cbdc
    LEA EAX,[EDI + 0x4]                 ; 0056cbe0
        ;   Label: LAB_0056cbe0
    PUSH EAX                            ; 0056cbe3
    CALL crt_time.c__localtime_FUN_005665e8 ; 0056cbe4
        ;   XREF to: 005665e8 (UNCONDITIONAL_CALL)  ; _tm * crt_time.c__localtime_FUN_005665e8(time_t * timer)
    MOV EDX,EAX                         ; 0056cbe9
    MOV AX,word ptr [EAX + 0x14]        ; 0056cbeb
    ADD ESP,0x4                         ; 0056cbef
    ADD EAX,0x76c                       ; 0056cbf2
    MOV word ptr [ESP + 0x10],AX        ; 0056cbf7
    MOV word ptr [ESP],AX               ; 0056cbfc
    MOV AX,word ptr [EDX + 0x10]        ; 0056cc00
    INC EAX                             ; 0056cc04
    MOV word ptr [ESP + 0x12],AX        ; 0056cc05
    MOV word ptr [ESP + 0x2],AX         ; 0056cc0a
    MOV AX,word ptr [EDX + 0xc]         ; 0056cc0f
    MOV word ptr [ESP + 0x16],AX        ; 0056cc13
    MOV word ptr [ESP + 0x6],AX         ; 0056cc18
    MOV AX,word ptr [EDX + 0x8]         ; 0056cc1d
    MOV word ptr [ESP + 0x18],AX        ; 0056cc21
    MOV word ptr [ESP + 0x8],AX         ; 0056cc26
    MOV AX,word ptr [EDX + 0x4]         ; 0056cc2b
    MOV word ptr [ESP + 0x1a],AX        ; 0056cc2f
    MOV word ptr [ESP + 0xa],AX         ; 0056cc34
    MOV AX,word ptr [EDX]               ; 0056cc39
    MOV word ptr [ESP + 0x1c],AX        ; 0056cc3c
    MOV word ptr [ESP + 0xc],AX         ; 0056cc41
    LEA EAX,[ESP + 0x28]                ; 0056cc46
    PUSH EAX                            ; 0056cc4a
    LEA EAX,[ESP + 0x4]                 ; 0056cc4b
    XOR EDX,EDX                         ; 0056cc4f
    PUSH EAX                            ; 0056cc51
    MOV word ptr [ESP + 0x26],DX        ; 0056cc52
    MOV word ptr [ESP + 0x16],DX        ; 0056cc57
    CALL dword ptr CS:[0x5755bc]        ; 0056cc5c
    LEA EAX,[ESP + 0x20]                ; 0056cc63
    PUSH EAX                            ; 0056cc67
    LEA EAX,[ESP + 0x2c]                ; 0056cc68
    PUSH EAX                            ; 0056cc6c
    CALL dword ptr CS:[0x575564]        ; 0056cc6d
    LEA EAX,[ESP + 0x28]                ; 0056cc74
    PUSH EAX                            ; 0056cc78
    LEA EAX,[ESP + 0x14]                ; 0056cc79
    PUSH EAX                            ; 0056cc7d
    CALL dword ptr CS:[0x5755bc]        ; 0056cc7e
    LEA EAX,[ESP + 0x40]                ; 0056cc85
    PUSH EAX                            ; 0056cc89
    LEA EAX,[ESP + 0x2c]                ; 0056cc8a
    PUSH EAX                            ; 0056cc8e
    CALL dword ptr CS:[0x575564]        ; 0056cc8f
    LEA EAX,[ESP + 0x20]                ; 0056cc96
    PUSH EAX                            ; 0056cc9a
    LEA EAX,[ESP + 0x44]                ; 0056cc9b
    PUSH EAX                            ; 0056cc9f
    LEA EAX,[ESP + 0x38]                ; 0056cca0
    PUSH EAX                            ; 0056cca4
    PUSH ESI                            ; 0056cca5
    CALL dword ptr CS:[0x5755a4]        ; 0056cca6
    TEST EAX,EAX                        ; 0056ccad
    JNZ 0x0056ccc5                      ; 0056ccaf
        ;   XREF to: 0056ccc5 (CONDITIONAL_JUMP)  ; LAB_0056ccc5
    PUSH ESI                            ; 0056ccb1
    CALL dword ptr CS:[0x57548c]        ; 0056ccb2
    CALL crt_errno.c___set_errno_FUN_0056c73c ; 0056ccb9
        ;   XREF to: 0056c73c (UNCONDITIONAL_CALL)  ; DWORD crt_errno.c___set_errno_FUN_0056c73c()
    ADD ESP,0x48                        ; 0056ccbe
    POP EDI                             ; 0056ccc1
    POP ESI                             ; 0056ccc2
    POP EBX                             ; 0056ccc3
    RET                                 ; 0056ccc4
    PUSH ESI                            ; 0056ccc5
        ;   Label: LAB_0056ccc5
    CALL dword ptr CS:[0x57548c]        ; 0056ccc6
    XOR EAX,EAX                         ; 0056cccd
    ADD ESP,0x48                        ; 0056cccf
        ;   Label: LAB_0056cccf
    POP EDI                             ; 0056ccd2
    POP ESI                             ; 0056ccd3
    POP EBX                             ; 0056ccd4
    RET                                 ; 0056ccd5

