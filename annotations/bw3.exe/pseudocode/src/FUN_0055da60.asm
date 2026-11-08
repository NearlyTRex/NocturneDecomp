; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0055da60(undefined4 *param_1,uint param_2,int param_3,DWORD param_4,uint *param_5)
;
;
; Referenced Globals:
;   void* PTR_waveOutOpen_005b3484 = 001b39f4
;   void* PTR_GlobalAlloc_005b35dc = 001b3fd0
;   void* PTR_GlobalLock_005b35e4 = 001b3fec
;   TerminatedCString s_waveOutOpen_failed_005d4fe5
;   undefined4 DAT_00604514
;   undefined4 DAT_02cf546c
;   undefined4 DAT_02cf54f0
;   undefined4 DAT_02cf54f4
;   undefined4 DAT_02cf54f8
;   undefined4 DAT_02cf54fc
;   undefined4 DAT_02cf5500
;
; Called Functions:
;   FUN_005591a0
;   FUN_0055a560
;   FUN_005a3120
;   GlobalAlloc
;   GlobalLock
;   waveOutOpen
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055da60
        ;   Label: FUN_0055da60
    PUSH ESI                            ; 0055da61
    PUSH EDI                            ; 0055da62
    PUSH EBP                            ; 0055da63
    SUB ESP,0x14                        ; 0055da64
    MOV EDI,dword ptr [ESP + 0x28]      ; 0055da67
    PUSH EDI                            ; 0055da6b
    MOV EAX,dword ptr [EDI]             ; 0055da6c
    CALL dword ptr [EAX]                ; 0055da6e
    ADD ESP,0x4                         ; 0055da70
    TEST EAX,EAX                        ; 0055da73
    JNZ 0x0055da7f                      ; 0055da75
        ;   XREF to: 0055da7f (CONDITIONAL_JUMP)  ; LAB_0055da7f
    ADD ESP,0x14                        ; 0055da77
    POP EBP                             ; 0055da7a
    POP EDI                             ; 0055da7b
    POP ESI                             ; 0055da7c
    POP EBX                             ; 0055da7d
    RET                                 ; 0055da7e
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0055da7f
        ;   Label: LAB_0055da7f
    MOV [0x02cf54f0],EAX                ; 0055da83 | DAT_02cf54f0
    MOV EAX,dword ptr [ESP + 0x30]      ; 0055da88
    MOV EDX,0x4                         ; 0055da8c
    MOV [0x02cf54f4],EAX                ; 0055da91 | DAT_02cf54f4
    MOV EAX,dword ptr [ESP + 0x34]      ; 0055da96
    MOV dword ptr [0x02cf5500],EDX      ; 0055da9a | DAT_02cf5500
    MOV [0x02cf54f8],EAX                ; 0055daa0 | DAT_02cf54f8
    CALL FUN_005591a0                   ; 0055daa5
        ;   XREF to: 005591a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005591a0()
    MOV dword ptr [ESP + 0x10],EAX      ; 0055daaa
    FLD float ptr [ESP + 0x10]          ; 0055daae
    FILD dword ptr [0x02cf54f8]         ; 0055dab2 | DAT_02cf54f8
    FMULP                               ; 0055dab8
    FILD dword ptr [0x02cf5500]         ; 0055daba | DAT_02cf5500
    FDIVP                               ; 0055dac0
    CALL FUN_005a3120                   ; 0055dac2
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [0x02cf54fc]        ; 0055dac7 | DAT_02cf54fc
    MOV EAX,[0x02cf54fc]                ; 0055dacd | DAT_02cf54fc
    ADD EAX,0xf                         ; 0055dad2
    XOR ESI,ESI                         ; 0055dad5
    AND AL,0xf0                         ; 0055dad7
    MOV ECX,dword ptr [0x02cf5500]      ; 0055dad9 | DAT_02cf5500
    MOV [0x02cf54fc],EAX                ; 0055dadf | DAT_02cf54fc
    TEST ECX,ECX                        ; 0055dae4
    JLE 0x0055db80                      ; 0055dae6
        ;   XREF to: 0055db80 (CONDITIONAL_JUMP)  ; LAB_0055db80
    XOR EBX,EBX                         ; 0055daec
    MOV EAX,[0x02cf54f0]                ; 0055daee | DAT_02cf54f0
        ;   Label: LAB_0055daee
    MOV EDX,EAX                         ; 0055daf3
    SAR EDX,0x1f                        ; 0055daf5
    SHL EDX,0x3                         ; 0055daf8
    SBB EAX,EDX                         ; 0055dafb
    SAR EAX,0x3                         ; 0055dafd
    IMUL EAX,dword ptr [0x02cf54fc]     ; 0055db00 | DAT_02cf54fc
    IMUL EAX,dword ptr [0x02cf54f4]     ; 0055db07 | DAT_02cf54f4
    PUSH EAX                            ; 0055db0e
    PUSH 0x2002                         ; 0055db0f
    CALL dword ptr CS:[0x5b35dc]        ; 0055db14 | PTR_GlobalAlloc_005b35dc
    MOV dword ptr [EBX + 0x2cf54b0],EAX ; 0055db1b
    TEST EAX,EAX                        ; 0055db21
    JZ 0x0055dc0c                       ; 0055db23
        ;   XREF to: 0055dc0c (CONDITIONAL_JUMP)  ; LAB_0055dc0c
    PUSH EAX                            ; 0055db29
    CALL dword ptr CS:[0x5b35e4]        ; 0055db2a | PTR_GlobalLock_005b35e4
    MOV dword ptr [EBX + 0x2cf54d0],EAX ; 0055db31
    TEST EAX,EAX                        ; 0055db37
    JZ 0x0055dc0c                       ; 0055db39
        ;   XREF to: 0055dc0c (CONDITIONAL_JUMP)  ; LAB_0055dc0c
    PUSH 0x20                           ; 0055db3f
    PUSH 0x2002                         ; 0055db41
    CALL dword ptr CS:[0x5b35dc]        ; 0055db46 | PTR_GlobalAlloc_005b35dc
    MOV dword ptr [EBX + 0x2cf5470],EAX ; 0055db4d
    TEST EAX,EAX                        ; 0055db53
    JZ 0x0055dc0c                       ; 0055db55
        ;   XREF to: 0055dc0c (CONDITIONAL_JUMP)  ; LAB_0055dc0c
    MOV EBP,dword ptr [EBX + 0x2cf5470] ; 0055db5b
    PUSH EBP                            ; 0055db61
    INC ESI                             ; 0055db62
    CALL dword ptr CS:[0x5b35e4]        ; 0055db63 | PTR_GlobalLock_005b35e4
    MOV dword ptr [EBX + 0x2cf5490],EAX ; 0055db6a
    MOV EAX,[0x02cf5500]                ; 0055db70 | DAT_02cf5500
    ADD EBX,0x4                         ; 0055db75
    CMP ESI,EAX                         ; 0055db78
    JL 0x0055daee                       ; 0055db7a
        ;   XREF to: 0055daee (CONDITIONAL_JUMP)  ; LAB_0055daee
    MOV EDX,0x1                         ; 0055db80
        ;   Label: LAB_0055db80
    MOV AX,[0x02cf54f0]                 ; 0055db85 | DAT_02cf54f0
    MOV word ptr [ESP],DX               ; 0055db8b
    MOV word ptr [ESP + 0xe],AX         ; 0055db8f
    XOR EDX,EDX                         ; 0055db94
    MOV AX,[0x02cf54f4]                 ; 0055db96 | DAT_02cf54f4
    MOV DX,word ptr [ESP + 0xe]         ; 0055db9c
    MOV word ptr [ESP + 0x2],AX         ; 0055dba1
    MOV EAX,EDX                         ; 0055dba6
    SAR EDX,0x1f                        ; 0055dba8
    SHL EDX,0x3                         ; 0055dbab
    SBB EAX,EDX                         ; 0055dbae
    SAR EAX,0x3                         ; 0055dbb0
    XOR EDX,EDX                         ; 0055dbb3
    MOV DX,word ptr [ESP + 0x2]         ; 0055dbb5
    IMUL EAX,EDX                        ; 0055dbba
    MOV word ptr [ESP + 0xc],AX         ; 0055dbbd
    MOV EAX,[0x02cf54f8]                ; 0055dbc2 | DAT_02cf54f8
    MOV dword ptr [ESP + 0x4],EAX       ; 0055dbc7
    XOR EAX,EAX                         ; 0055dbcb
    MOV EDX,dword ptr [ESP + 0x4]       ; 0055dbcd
    MOV AX,word ptr [ESP + 0xc]         ; 0055dbd1
    IMUL EDX,EAX                        ; 0055dbd6
    PUSH 0x0                            ; 0055dbd9
    PUSH 0x0                            ; 0055dbdb
    PUSH 0x0                            ; 0055dbdd
    LEA EAX,[ESP + 0xc]                 ; 0055dbdf
    PUSH EAX                            ; 0055dbe3
    MOV dword ptr [ESP + 0x18],EDX      ; 0055dbe4
    MOV EDX,dword ptr [0x00604514]      ; 0055dbe8 | DAT_00604514
    PUSH EDX                            ; 0055dbee
    PUSH 0x2cf546c                      ; 0055dbef | DAT_02cf546c
    CALL dword ptr CS:[0x5b3484]        ; 0055dbf4 | PTR_waveOutOpen_005b3484
    TEST EAX,EAX                        ; 0055dbfb
    JZ 0x0055dc1e                       ; 0055dbfd
        ;   XREF to: 0055dc1e (CONDITIONAL_JUMP)  ; LAB_0055dc1e
    PUSH 0x5d4fe5                       ; 0055dbff | = "waveOutOpen failed"
    CALL FUN_0055a560                   ; 0055dc04
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined FUN_0055a560()
    ADD ESP,0x4                         ; 0055dc09
    PUSH EDI                            ; 0055dc0c
        ;   Label: LAB_0055dc0c
    MOV EAX,dword ptr [EDI]             ; 0055dc0d
    CALL dword ptr [EAX]                ; 0055dc0f
    ADD ESP,0x4                         ; 0055dc11
    XOR EAX,EAX                         ; 0055dc14
    ADD ESP,0x14                        ; 0055dc16
    POP EBP                             ; 0055dc19
    POP EDI                             ; 0055dc1a
    POP ESI                             ; 0055dc1b
    POP EBX                             ; 0055dc1c
    RET                                 ; 0055dc1d
    MOV EDX,dword ptr [ESP + 0x38]      ; 0055dc1e
        ;   Label: LAB_0055dc1e
    MOV EAX,[0x02cf54fc]                ; 0055dc22 | DAT_02cf54fc
    MOV dword ptr [EDX],EAX             ; 0055dc27
    MOV EAX,0x1                         ; 0055dc29
    ADD ESP,0x14                        ; 0055dc2e
    POP EBP                             ; 0055dc31
    POP EDI                             ; 0055dc32
    POP ESI                             ; 0055dc33
    POP EBX                             ; 0055dc34
    RET                                 ; 0055dc35

