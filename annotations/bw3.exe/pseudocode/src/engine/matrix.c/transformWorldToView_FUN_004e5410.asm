; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3i * __stack_esi engine_matrix_c_transformWorldToView_FUN_004e5410(CVector3i *input_coords,CVector3i *output_coords)
;
; Parameters:
; CVector3i *      Stack[0x4]:4   input_coords
;
; XREF[1]:
;   engine_matrix.c_projectToScreen_FUN_004e6d80 at 004e6da6
;
; Referenced Globals:
;   int g_INT_01c6e2cc
;   int g_INT_01c6e2d0
;   int g_INT_01c6e2d4
;   int g_INT_01c6e2fc
;   int g_INT_01c6e300
;   int g_INT_01c6e304
;   int g_INT_01c6e308
;   int g_INT_01c6e30c
;   int g_INT_01c6e310
;   int g_INT_01c6e314
;   int g_INT_01c6e318
;   int g_INT_01c6e31c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e5410
        ;   Label: engine_matrix.c_transformWorldToView_FUN_004e5410
    PUSH EDI                            ; 004e5411
    PUSH EBP                            ; 004e5412
    SUB ESP,0xc                         ; 004e5413
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004e5416
    MOV EBP,ESI                         ; 004e541a
    MOV EDX,dword ptr [0x01c6e2cc]      ; 004e541c | g_INT_01c6e2cc
    MOV EDI,dword ptr [0x01c6e2d0]      ; 004e5422 | g_INT_01c6e2d0
    MOV EAX,[0x01c6e2d4]                ; 004e5428 | g_INT_01c6e2d4
    MOV ESI,dword ptr [EBX]             ; 004e542d
    MOV ECX,dword ptr [EBX + 0x4]       ; 004e542f
    SUB ESI,EDX                         ; 004e5432
    MOV EBX,dword ptr [EBX + 0x8]       ; 004e5434
    MOV EDX,ESI                         ; 004e5437
    SUB EBX,EAX                         ; 004e5439
    MOV EAX,[0x01c6e2fc]                ; 004e543b | g_INT_01c6e2fc
    SUB ECX,EDI                         ; 004e5440
    IMUL EDX                            ; 004e5442
    SHRD EAX,EDX,0x10                   ; 004e5444
    MOV EDI,EAX                         ; 004e5448
    MOV EDX,ECX                         ; 004e544a
    MOV EAX,[0x01c6e308]                ; 004e544c | g_INT_01c6e308
    IMUL EDX                            ; 004e5451
    SHRD EAX,EDX,0x10                   ; 004e5453
    MOV EDX,EBX                         ; 004e5457
    ADD EDI,EAX                         ; 004e5459
    MOV EAX,[0x01c6e314]                ; 004e545b | g_INT_01c6e314
    IMUL EDX                            ; 004e5460
    SHRD EAX,EDX,0x10                   ; 004e5462
    MOV EDX,ESI                         ; 004e5466
    ADD EDI,EAX                         ; 004e5468
    MOV EAX,[0x01c6e300]                ; 004e546a | g_INT_01c6e300
    MOV dword ptr [ESP],EDI             ; 004e546f
    IMUL EDX                            ; 004e5472
    SHRD EAX,EDX,0x10                   ; 004e5474
    MOV EDI,EAX                         ; 004e5478
    MOV EDX,ECX                         ; 004e547a
    MOV EAX,[0x01c6e30c]                ; 004e547c | g_INT_01c6e30c
    IMUL EDX                            ; 004e5481
    SHRD EAX,EDX,0x10                   ; 004e5483
    MOV EDX,EBX                         ; 004e5487
    ADD EDI,EAX                         ; 004e5489
    MOV EAX,[0x01c6e318]                ; 004e548b | g_INT_01c6e318
    IMUL EDX                            ; 004e5490
    SHRD EAX,EDX,0x10                   ; 004e5492
    MOV EDX,ESI                         ; 004e5496
    ADD EDI,EAX                         ; 004e5498
    MOV EAX,[0x01c6e304]                ; 004e549a | g_INT_01c6e304
    IMUL EDX                            ; 004e549f
    SHRD EAX,EDX,0x10                   ; 004e54a1
    MOV ESI,EAX                         ; 004e54a5
    MOV EDX,ECX                         ; 004e54a7
    MOV EAX,[0x01c6e310]                ; 004e54a9 | g_INT_01c6e310
    IMUL EDX                            ; 004e54ae
    SHRD EAX,EDX,0x10                   ; 004e54b0
    MOV EDX,EBX                         ; 004e54b4
    ADD ESI,EAX                         ; 004e54b6
    MOV EAX,[0x01c6e31c]                ; 004e54b8 | g_INT_01c6e31c
    MOV dword ptr [ESP + 0x4],EDI       ; 004e54bd
    IMUL EDX                            ; 004e54c1
    SHRD EAX,EDX,0x10                   ; 004e54c3
    ADD ESI,EAX                         ; 004e54c7
    MOV EDI,EBP                         ; 004e54c9
    MOV dword ptr [ESP + 0x8],ESI       ; 004e54cb
    MOV ESI,ESP                         ; 004e54cf
    MOVSD ES:EDI,ESI                    ; 004e54d1
    MOVSD ES:EDI,ESI                    ; 004e54d2
    MOVSD ES:EDI,ESI                    ; 004e54d3
    MOV EAX,EBP                         ; 004e54d4
    ADD ESP,0xc                         ; 004e54d6
    POP EBP                             ; 004e54d9
    POP EDI                             ; 004e54da
    POP EBX                             ; 004e54db
    RET                                 ; 004e54dc

