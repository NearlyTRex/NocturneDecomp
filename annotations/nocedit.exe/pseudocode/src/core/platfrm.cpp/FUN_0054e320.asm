; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_platfrm.cpp_FUN_0054e320()
;
; Local Variables:
; undefined1       Stack[-0xbc]:1  local_bc
; undefined1       Stack[-0x8c]:1  local_8c
; undefined1       Stack[-0x5c]:1  local_5c
; undefined1       Stack[-0x2c]:1  local_2c
; undefined1       Stack[-0x20]:1  local_20
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_platfrm.cpp_FUN_0054cc30 at 0054d679
;
; Called Functions:
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
;   core_xform.cpp_getTranslation_FUN_005f6110
;   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
;   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054e320
        ;   Label: core_platfrm.cpp_FUN_0054e320
    PUSH ESI                            ; 0054e321
    PUSH EDI                            ; 0054e322
    PUSH EBP                            ; 0054e323
    SUB ESP,0xac                        ; 0054e324
    MOV EBP,dword ptr [ESP + 0xc0]      ; 0054e32a
    LEA EAX,[EBP + 0x30]                ; 0054e331
    PUSH EAX                            ; 0054e334
    LEA EAX,[EBP + 0x20]                ; 0054e335
    PUSH EAX                            ; 0054e338
    LEA EAX,[ESP + 0x38]                ; 0054e339
    PUSH EAX                            ; 0054e33d
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 0054e33e
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0054e343
    LEA EAX,[EBP + 0x51c]               ; 0054e346
    XOR EBX,EBX                         ; 0054e34c
    MOV dword ptr [ESP + 0xa8],EAX      ; 0054e34e
    IMUL ESI,EBX,0x34                   ; 0054e355
        ;   Label: LAB_0054e355
    CMP dword ptr [EBP + 0x51c],0x0     ; 0054e358
    JNZ 0x0054e375                      ; 0054e35f
        ;   XREF to: 0054e375 (CONDITIONAL_JUMP)  ; LAB_0054e375
    INC EBX                             ; 0054e361
        ;   Label: LAB_0054e361
    ADD EBP,0x34                        ; 0054e362
    CMP EBX,0xa                         ; 0054e365
    JL 0x0054e355                       ; 0054e368
        ;   XREF to: 0054e355 (CONDITIONAL_JUMP)  ; LAB_0054e355
    ADD ESP,0xac                        ; 0054e36a
    POP EBP                             ; 0054e370
    POP EDI                             ; 0054e371
    POP ESI                             ; 0054e372
    POP EBX                             ; 0054e373
    RET                                 ; 0054e374
    LEA EAX,[ESP + 0x30]                ; 0054e375
        ;   Label: LAB_0054e375
    PUSH EAX                            ; 0054e379
    MOV EAX,dword ptr [ESP + 0xac]      ; 0054e37a
    ADD EAX,ESI                         ; 0054e381
    ADD EAX,0x4                         ; 0054e383
    PUSH EAX                            ; 0054e386
    LEA ESI,[ESP + 0x68]                ; 0054e387
    LEA EDI,[ESP + 0x8]                 ; 0054e38b
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 0054e38f
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * output_matrix, CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b)
    MOV ECX,0xc                         ; 0054e394
    ADD ESP,0x8                         ; 0054e399
    LEA EAX,[ESP + 0x9c]                ; 0054e39c
    LEA ESI,[ESP + 0x60]                ; 0054e3a3
    PUSH EAX                            ; 0054e3a7
    MOVSD.REP ES:EDI,ESI                ; 0054e3a8
    LEA EAX,[ESP + 0x4]                 ; 0054e3aa
    MOV ESI,dword ptr [EBP + 0x51c]     ; 0054e3ae
    PUSH EAX                            ; 0054e3b4
    MOV EDI,dword ptr [ESI + 0x154]     ; 0054e3b5
    CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690 ; 0054e3bb
        ;   XREF to: 005f5690 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_005f5690(CMatrix3x3f * matrix_in, CVector3f * euler_out)
    ADD ESP,0x8                         ; 0054e3c0
    PUSH EAX                            ; 0054e3c3
    LEA EAX,[ESP + 0x94]                ; 0054e3c4
    PUSH EAX                            ; 0054e3cb
    LEA EAX,[ESP + 0x8]                 ; 0054e3cc
    PUSH EAX                            ; 0054e3d0
    CALL core_xform.cpp_getTranslation_FUN_005f6110 ; 0054e3d1
        ;   XREF to: 005f6110 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_getTranslation_FUN_005f6110(CMatrix3x4f * matrix_in, CVector3f * vector_out)
    ADD ESP,0x8                         ; 0054e3d6
    PUSH EAX                            ; 0054e3d9
    PUSH ESI                            ; 0054e3da
    CALL dword ptr [EDI + 0x60]         ; 0054e3db
    ADD ESP,0xc                         ; 0054e3de
    JMP 0x0054e361                      ; 0054e3e1
        ;   XREF to: 0054e361 (UNCONDITIONAL_JUMP)  ; LAB_0054e361

