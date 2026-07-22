; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00457440(void)
;
;
; XREF[1]:
;   FUN_004571f0 at 004573c0
;
; Referenced Globals:
;   double DOUBLE_0057d496 = 0.00390625
;
; Called Functions:
;   core_dpart.cpp_CDemonPart_calculateFaceNormals_FUN_00457120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00457440
        ;   Label: FUN_00457440
    CALL core_dpart.cpp_CDemonPart_calculateFaceNormals_FUN_00457120 ; 00457441
        ;   XREF to: 00457120 (UNCONDITIONAL_CALL)  ; undefined core_dpart.cpp_CDemonPart_calculateFaceNormals_FUN_00457120()
    FLD double ptr [0x0057d496]         ; 00457446 | DOUBLE_0057d496
    FILD dword ptr [EBX + 0x354]        ; 0045744c
    FMUL ST1                            ; 00457452
    FILD dword ptr [EBX + 0x358]        ; 00457454
    FMUL ST2                            ; 0045745a
    FILD dword ptr [EBX + 0x35c]        ; 0045745c
    FMUL ST3                            ; 00457462
    FILD dword ptr [EBX + 0x360]        ; 00457464
    FMUL ST4                            ; 0045746a
    FILD dword ptr [EBX + 0x364]        ; 0045746c
    FMUL ST5                            ; 00457472
    FILD dword ptr [EBX + 0x368]        ; 00457474
    FMULP ST6                           ; 0045747a
    ADD ESP,0x4                         ; 0045747c
    FXCH ST4                            ; 0045747f
    FSTP float ptr [EBX + 0x36c]        ; 00457481
    FXCH ST2                            ; 00457487
    FSTP float ptr [EBX + 0x370]        ; 00457489
    FSTP float ptr [EBX + 0x374]        ; 0045748f
    FSTP float ptr [EBX + 0x378]        ; 00457495
    FSTP float ptr [EBX + 0x37c]        ; 0045749b
    FSTP float ptr [EBX + 0x380]        ; 004574a1
    ADD ESP,0xc                         ; 004574a7
    POP EBP                             ; 004574aa
    POP EDI                             ; 004574ab
    POP ESI                             ; 004574ac
    POP EBX                             ; 004574ad
    RET                                 ; 004574ae

