; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_setColor_FUN_00465ea0(int color_value)
;
; Parameters:
; int              Stack[0x4]:4   color_value
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00468b80 at 00468c41
;   core_script.cpp_CScript_renderEditor_FUN_00521af0 at 00521b38
;
; Referenced Globals:
;   TerminatedCString s_cockpit_drawsurf_cpp_005d11f4
;   TerminatedCString s_Invalid_bitsPerPixel_in_005d120c
;   undefined4 DAT_006141c0
;   undefined4 DAT_01ba5c28
;   undefined4 DAT_01ba5c2c
;   undefined4 DAT_01ba5c34
;   undefined4 DAT_01ba5c38
;   undefined4 DAT_01ba5c3c
;   undefined4 DAT_01ba5c40
;   undefined4 DAT_01ba5c44
;   undefined4 DAT_01ba5c48
;   undefined4 DAT_01ba5c4c
;   undefined4 DAT_01c35814
;   undefined4 DAT_01c35818
;   undefined4 DAT_01c35820
;   ... and 8 more
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00465ea0
        ;   Label: cockpit_drawsurf.cpp_setColor_FUN_00465ea0
    PUSH ESI                            ; 00465ea1
    PUSH EDI                            ; 00465ea2
    PUSH EBP                            ; 00465ea3
    SUB ESP,0x4                         ; 00465ea4
    MOV EAX,dword ptr [ESP + 0x18]      ; 00465ea7
    TEST EAX,EAX                        ; 00465eab
    JL 0x00465ee6                       ; 00465ead
        ;   XREF to: 00465ee6 (CONDITIONAL_JUMP)  ; LAB_00465ee6
    XOR EDX,EDX                         ; 00465eaf
    MOV dword ptr [0x01ba5c34],EDX      ; 00465eb1 | DAT_01ba5c34
    AND EAX,0xff                        ; 00465eb7
        ;   Label: LAB_00465eb7
    MOV EDX,dword ptr [0x006141c0]      ; 00465ebc | DAT_006141c0
    MOV [0x01ba5c2c],EAX                ; 00465ec2 | DAT_01ba5c2c
    CMP EDX,0x10                        ; 00465ec7
    JNC 0x00466068                      ; 00465eca
        ;   XREF to: 00466068 (CONDITIONAL_JUMP)  ; LAB_00466068
    CMP EDX,0x8                         ; 00465ed0
    JNZ 0x0046607f                      ; 00465ed3
        ;   XREF to: 0046607f (CONDITIONAL_JUMP)  ; LAB_0046607f
    MOV [0x01ba5c28],EAX                ; 00465ed9 | DAT_01ba5c28
    ADD ESP,0x4                         ; 00465ede
    POP EBP                             ; 00465ee1
    POP EDI                             ; 00465ee2
    POP ESI                             ; 00465ee3
    POP EBX                             ; 00465ee4
    RET                                 ; 00465ee5
    MOV ESI,dword ptr [0x01c35818]      ; 00465ee6 | DAT_01c35818
        ;   Label: LAB_00465ee6
    MOV [0x01ba5c38],EAX                ; 00465eec | DAT_01ba5c38
    MOV EBX,EAX                         ; 00465ef1
    XOR EDX,EDX                         ; 00465ef3
    MOV EAX,0xff                        ; 00465ef5
    DIV ESI                             ; 00465efa
    MOV ECX,0x1                         ; 00465efc
    NEG EBX                             ; 00465f01
    MOV dword ptr [0x01ba5c34],ECX      ; 00465f03 | DAT_01ba5c34
    MOV ECX,EBX                         ; 00465f09
    MOV EDI,dword ptr [0x01c35824]      ; 00465f0b | DAT_01c35824
    SHR EAX,CL                          ; 00465f11
    XOR EDX,EDX                         ; 00465f13
    MOV [0x01ba5c3c],EAX                ; 00465f15 | DAT_01ba5c3c
    MOV EAX,0xff                        ; 00465f1a
    DIV EDI                             ; 00465f1f
    MOV EBP,dword ptr [0x01c35830]      ; 00465f21 | DAT_01c35830
    SHR EAX,CL                          ; 00465f27
    XOR EDX,EDX                         ; 00465f29
    MOV [0x01ba5c40],EAX                ; 00465f2b | DAT_01ba5c40
    MOV EAX,0xff                        ; 00465f30
    DIV EBP                             ; 00465f35
    MOV EDX,dword ptr [0x01ba5c3c]      ; 00465f37 | DAT_01ba5c3c
    SHR EAX,CL                          ; 00465f3d
    MOV CL,byte ptr [0x01c35814]        ; 00465f3f | DAT_01c35814
    MOV [0x01ba5c44],EAX                ; 00465f45 | DAT_01ba5c44
    MOV EAX,[0x01ba5c40]                ; 00465f4a | DAT_01ba5c40
    SHL EDX,CL                          ; 00465f4f
    MOV CL,byte ptr [0x01c35820]        ; 00465f51 | DAT_01c35820
    SHL EAX,CL                          ; 00465f57
    MOV CL,byte ptr [0x01c3582c]        ; 00465f59 | DAT_01c3582c
    OR EDX,EAX                          ; 00465f5f
    MOV EAX,[0x01ba5c44]                ; 00465f61 | DAT_01ba5c44
    SHL EAX,CL                          ; 00465f66
    OR EDX,EAX                          ; 00465f68
    MOV dword ptr [0x01ba5c48],EDX      ; 00465f6a | DAT_01ba5c48
    MOV EAX,[0x01ba5c48]                ; 00465f70 | DAT_01ba5c48
    SHL EDX,0x10                        ; 00465f75
    OR EAX,EDX                          ; 00465f78
    MOV dword ptr [0x01ba5c38],EBX      ; 00465f7a | DAT_01ba5c38
    MOV [0x01ba5c4c],EAX                ; 00465f80 | DAT_01ba5c4c
    XOR EAX,EAX                         ; 00465f85
    JMP 0x00465eb7                      ; 00465f87
        ;   XREF to: 00465eb7 (UNCONDITIONAL_JUMP)  ; LAB_00465eb7
    XOR EBX,EBX                         ; 00465f8c
        ;   Label: LAB_00465f8c
    XOR EAX,EAX                         ; 00465f8e
    MOV BL,byte ptr [ECX + 0x1c35839]   ; 00465f90 | DAT_01c35839
    MOV AL,byte ptr [ECX + 0x1c35838]   ; 00465f96 | DAT_01c35838
    MOV CL,byte ptr [ECX + 0x1c3583a]   ; 00465f9c | DAT_01c3583a
    MOV ESI,dword ptr [0x01c35818]      ; 00465fa2 | DAT_01c35818
    XOR EDX,EDX                         ; 00465fa8
    DIV ESI                             ; 00465faa
    MOV EDI,dword ptr [0x01c35824]      ; 00465fac | DAT_01c35824
    MOV ESI,EAX                         ; 00465fb2
    XOR EDX,EDX                         ; 00465fb4
    MOV EAX,EBX                         ; 00465fb6
    DIV EDI                             ; 00465fb8
    MOV EBP,dword ptr [0x01c35830]      ; 00465fba | DAT_01c35830
    AND ECX,0xff                        ; 00465fc0
    MOV EDI,EAX                         ; 00465fc6
    XOR EDX,EDX                         ; 00465fc8
    MOV EAX,ECX                         ; 00465fca
    DIV EBP                             ; 00465fcc
    MOV dword ptr [ESP],ECX             ; 00465fce
    MOV CL,byte ptr [0x01c35814]        ; 00465fd1 | DAT_01c35814
    MOV dword ptr [ESP],EAX             ; 00465fd7
    MOV EAX,ESI                         ; 00465fda
    SHL EAX,CL                          ; 00465fdc
    MOV CL,byte ptr [0x01c35820]        ; 00465fde | DAT_01c35820
    MOV EDX,dword ptr [ESP]             ; 00465fe4
    SHL EDI,CL                          ; 00465fe7
    MOV CL,byte ptr [0x01c3582c]        ; 00465fe9 | DAT_01c3582c
    OR EAX,EDI                          ; 00465fef
    SHL EDX,CL                          ; 00465ff1
    OR EAX,EDX                          ; 00465ff3
    AND EAX,0xffff                      ; 00465ff5
    MOV [0x01ba5c28],EAX                ; 00465ffa | DAT_01ba5c28
    ADD ESP,0x4                         ; 00465fff
    POP EBP                             ; 00466002
    POP EDI                             ; 00466003
    POP ESI                             ; 00466004
    POP EBX                             ; 00466005
    RET                                 ; 00466006
    MOVZX ESI,byte ptr [ECX + 0x1c35838] ; 00466007 | DAT_01c35838
        ;   Label: LAB_00466007
    XOR EAX,EAX                         ; 0046600e
    XOR EBX,EBX                         ; 00466010
    MOV AL,byte ptr [ECX + 0x1c35839]   ; 00466012 | DAT_01c35839
    MOV BL,byte ptr [ECX + 0x1c3583a]   ; 00466018 | DAT_01c3583a
    CMP EDX,EDX                         ; 0046601e
    JNZ 0x0046604e                      ; 00466020
        ;   XREF to: 0046604e (CONDITIONAL_JUMP)  ; LAB_0046604e
    MOV CL,byte ptr [0x01c35814]        ; 00466022 | DAT_01c35814
    SHL ESI,CL                          ; 00466028
    MOV CL,byte ptr [0x01c35820]        ; 0046602a | DAT_01c35820
    SHL EAX,CL                          ; 00466030
    MOV CL,byte ptr [0x01c3582c]        ; 00466032 | DAT_01c3582c
    SHL EBX,CL                          ; 00466038
    OR EAX,ESI                          ; 0046603a
    MOV ECX,EBX                         ; 0046603c
    OR ECX,EAX                          ; 0046603e
    MOV dword ptr [0x01ba5c28],ECX      ; 00466040 | DAT_01ba5c28
    ADD ESP,0x4                         ; 00466046
    POP EBP                             ; 00466049
    POP EDI                             ; 0046604a
    POP ESI                             ; 0046604b
    POP EBX                             ; 0046604c
    RET                                 ; 0046604d
    MOV ECX,EAX                         ; 0046604e
        ;   Label: LAB_0046604e
    SHL ESI,0x10                        ; 00466050
    SHL ECX,0x8                         ; 00466053
    OR ECX,ESI                          ; 00466056
    OR ECX,EBX                          ; 00466058
    MOV dword ptr [0x01ba5c28],ECX      ; 0046605a | DAT_01ba5c28
    ADD ESP,0x4                         ; 00466060
    POP EBP                             ; 00466063
    POP EDI                             ; 00466064
    POP ESI                             ; 00466065
    POP EBX                             ; 00466066
    RET                                 ; 00466067
    LEA ECX,[EAX*0x4 + 0x0]             ; 00466068
        ;   Label: LAB_00466068
    SUB ECX,EAX                         ; 0046606f
    CMP EDX,0x10                        ; 00466071
    JBE 0x00465f8c                      ; 00466074
        ;   XREF to: 00465f8c (CONDITIONAL_JUMP)  ; LAB_00465f8c
    CMP EDX,0x20                        ; 0046607a
    JZ 0x00466007                       ; 0046607d
        ;   XREF to: 00466007 (CONDITIONAL_JUMP)  ; LAB_00466007
    MOV EAX,0x5d11f4                    ; 0046607f | = "..\\cockpit\\drawsurf.cpp"
        ;   Label: LAB_0046607f
    MOV EDX,0xf6                        ; 00466084
    PUSH 0x5d120c                       ; 00466089 | = "Invalid bitsPerPixel in CDrawSurface:..."
    MOV [0x01d046a0],EAX                ; 0046608e | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 00466093 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00466099
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0046609e
    ADD ESP,0x4                         ; 004660a1
    POP EBP                             ; 004660a4
    POP EDI                             ; 004660a5
    POP ESI                             ; 004660a6
    POP EBX                             ; 004660a7
    RET                                 ; 004660a8

