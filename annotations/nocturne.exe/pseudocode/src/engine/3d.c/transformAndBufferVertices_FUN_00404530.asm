; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_transformAndBufferVertices_FUN_00404530(SMRGLHeaderExtended *mrgl)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   mrgl
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_3d.c_dispatchMRGLToRenderer_FUN_00408fc0 at 00408ffd
;
; Referenced Globals:
;   int INT_005b7644 = 0x1
;   undefined4 DAT_005c5014
;   undefined4 DAT_005c5024+3
;   undefined4 DAT_005c5040
;   undefined4 DAT_006b0264
;   undefined4 DAT_006b0268
;   undefined4 DAT_006b0298
;   undefined4 DAT_01c038f4
;
; Called Functions:
;   engine_special.cpp_transformAndProjectPoint_FUN_0053075c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00404530
        ;   Label: engine_3d.c_transformAndBufferVertices_FUN_00404530
    PUSH ESI                            ; 00404531
    PUSH EDI                            ; 00404532
    PUSH EBP                            ; 00404533
    SUB ESP,0x4                         ; 00404534
    MOV ESI,dword ptr [ESP + 0x18]      ; 00404537
    MOV EDX,0x1                         ; 0040453b
    MOV EBX,dword ptr [0x006b0264]      ; 00404540 | DAT_006b0264
    MOV ESI,dword ptr [ESI + 0x4]       ; 00404546
    MOV EDI,dword ptr [ESP + 0x18]      ; 00404549
    ADD ESI,EBX                         ; 0040454d
    XOR ECX,ECX                         ; 0040454f
    LEA EAX,[ESI*0x4 + 0x0]             ; 00404551
    XOR EBP,EBP                         ; 00404558
    SUB EAX,ESI                         ; 0040455a
    MOV ESI,0x5c5014                    ; 0040455c | DAT_005c5014
    SHL EAX,0x4                         ; 00404561
    MOV dword ptr [0x005b7644],EDX      ; 00404564 | INT_005b7644
    ADD ESI,EAX                         ; 0040456a
    MOV EAX,dword ptr [ESP + 0x18]      ; 0040456c
    ADD EDI,0xc                         ; 00404570
    MOV dword ptr [ESP],ECX             ; 00404573
    MOV EDX,dword ptr [EAX + 0x8]       ; 00404576
    MOV dword ptr [0x006b0298],EDI      ; 00404579 | DAT_006b0298
    TEST EDX,EDX                        ; 0040457f
    JLE 0x004045af                      ; 00404581
        ;   XREF to: 004045af (CONDITIONAL_JUMP)  ; LAB_004045af
    PUSH EDI                            ; 00404583
        ;   Label: LAB_00404583
    PUSH ESI                            ; 00404584
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00404585
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x01c038f4]                ; 0040458a | DAT_01c038f4
    MOV dword ptr [ESI + 0x2c],EAX      ; 0040458f | DAT_005c5040
    MOV AH,byte ptr [ESI + 0x13]        ; 00404592 | DAT_005c5024+3
    ADD ESP,0x8                         ; 00404595
    TEST AH,0x80                        ; 00404598
    JZ 0x004045f3                       ; 0040459b
        ;   XREF to: 004045f3 (CONDITIONAL_JUMP)  ; LAB_004045f3
    MOV EAX,dword ptr [ESP + 0x18]      ; 0040459d
        ;   Label: LAB_0040459d
    ADD ESI,0x30                        ; 004045a1
    INC EBP                             ; 004045a4
    MOV ECX,dword ptr [EAX + 0x8]       ; 004045a5
    ADD EDI,0xc                         ; 004045a8
    CMP EBP,ECX                         ; 004045ab
    JL 0x00404583                       ; 004045ad
        ;   XREF to: 00404583 (CONDITIONAL_JUMP)  ; LAB_00404583
    MOV EBX,dword ptr [0x006b0264]      ; 004045af | DAT_006b0264
        ;   Label: LAB_004045af
    TEST EBX,EBX                        ; 004045b5
    JNZ 0x004045bf                      ; 004045b7
        ;   XREF to: 004045bf (CONDITIONAL_JUMP)  ; LAB_004045bf
    MOV dword ptr [0x006b0268],EBX      ; 004045b9 | DAT_006b0268
    MOV ESI,dword ptr [ESP + 0x18]      ; 004045bf
        ;   Label: LAB_004045bf
    MOV EAX,dword ptr [ESP]             ; 004045c3
    CMP EAX,dword ptr [ESI + 0x8]       ; 004045c6
    JZ 0x004045f8                       ; 004045c9
        ;   XREF to: 004045f8 (CONDITIONAL_JUMP)  ; LAB_004045f8
    MOV ESI,dword ptr [ESP + 0x18]      ; 004045cb
        ;   Label: LAB_004045cb
    MOV ESI,dword ptr [ESI + 0x8]       ; 004045cf
    LEA EAX,[ESI*0x4 + 0x0]             ; 004045d2
    SUB EAX,ESI                         ; 004045d9
    LEA ESI,[EAX*0x4 + 0x0]             ; 004045db
    MOV EAX,dword ptr [ESP + 0x18]      ; 004045e2
    ADD EAX,0xc                         ; 004045e6
    ADD EAX,ESI                         ; 004045e9
    ADD ESP,0x4                         ; 004045eb
    POP EBP                             ; 004045ee
    POP EDI                             ; 004045ef
    POP ESI                             ; 004045f0
    POP EBX                             ; 004045f1
    RET                                 ; 004045f2
    INC dword ptr [ESP]                 ; 004045f3
        ;   Label: LAB_004045f3
    JMP 0x0040459d                      ; 004045f6
        ;   XREF to: 0040459d (UNCONDITIONAL_JUMP)  ; LAB_0040459d
    XOR EBP,EBP                         ; 004045f8
        ;   Label: LAB_004045f8
    MOV dword ptr [0x005b7644],EBP      ; 004045fa | INT_005b7644
    JMP 0x004045cb                      ; 00404600
        ;   XREF to: 004045cb (UNCONDITIONAL_JUMP)  ; LAB_004045cb

