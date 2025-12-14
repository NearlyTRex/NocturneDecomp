; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_superopt.cpp_COptimize_FUN_005d7350(COptimize * this_ptr)
;
; Parameters:
; COptimize *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Unable_to_add_polygon_fo_006546f3
;   TerminatedCString s_Unable_to_add_shared_tri_0065471a
;   TerminatedCString s_Unable_to_build_complex__00654749
;
; Called Functions:
;   shape_superopt.cpp_CObj_clearStateFlags_FUN_005d35e0
;   shape_superopt.cpp_FUN_005c7a90
;   shape_superopt.cpp_FUN_005c7b20
;   shape_superopt.cpp_logToFile_FUN_005c7910
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d7350
        ;   Label: shape_superopt.cpp_COptimize_FUN_005d7350
    PUSH ESI                            ; 005d7351
    PUSH EDI                            ; 005d7352
    PUSH EBP                            ; 005d7353
    SUB ESP,0x4                         ; 005d7354
    MOV EDI,dword ptr [ESP + 0x18]      ; 005d7357
    PUSH 0xa000                         ; 005d735b
    PUSH EDI                            ; 005d7360
    CALL shape_superopt.cpp_CObj_clearStateFlags_FUN_005d35e0 ; 005d7361
        ;   XREF to: 005d35e0 (UNCONDITIONAL_CALL)  ; void shape_superopt.cpp_CObj_clearStateFlags_FUN_005d35e0(CObj * this_ptr, uint mask)
    ADD ESP,0x8                         ; 005d7366
    MOV EDX,dword ptr [EDI + 0x8]       ; 005d7369
        ;   Label: LAB_005d7369
    XOR ESI,ESI                         ; 005d736c
    TEST EDX,EDX                        ; 005d736e
    JBE 0x005d7386                      ; 005d7370
        ;   XREF to: 005d7386 (CONDITIONAL_JUMP)  ; LAB_005d7386
    MOV EBX,dword ptr [EDI + 0xc]       ; 005d7372
    TEST byte ptr [EBX + 0x61],0x80     ; 005d7375
        ;   Label: LAB_005d7375
    JZ 0x005d7386                       ; 005d7379
        ;   XREF to: 005d7386 (CONDITIONAL_JUMP)  ; LAB_005d7386
    INC ESI                             ; 005d737b
    MOV ECX,dword ptr [EDI + 0x8]       ; 005d737c
    ADD EBX,0x68                        ; 005d737f
    CMP ESI,ECX                         ; 005d7382
    JC 0x005d7375                       ; 005d7384
        ;   XREF to: 005d7375 (CONDITIONAL_JUMP)  ; LAB_005d7375
    CMP ESI,dword ptr [EDI + 0x8]       ; 005d7386
        ;   Label: LAB_005d7386
    JNZ 0x005d7398                      ; 005d7389
        ;   XREF to: 005d7398 (CONDITIONAL_JUMP)  ; LAB_005d7398
    MOV EAX,0x1                         ; 005d738b
    ADD ESP,0x4                         ; 005d7390
    POP EBP                             ; 005d7393
    POP EDI                             ; 005d7394
    POP ESI                             ; 005d7395
    POP EBX                             ; 005d7396
    RET                                 ; 005d7397
    PUSH 0x0                            ; 005d7398
        ;   Label: LAB_005d7398
    MOV EAX,dword ptr [EDI + 0x40]      ; 005d739a
    PUSH EDI                            ; 005d739d
    CALL dword ptr [EAX + 0x38]         ; 005d739e
    ADD ESP,0x8                         ; 005d73a1
    MOV dword ptr [ESP],EAX             ; 005d73a4
    TEST EAX,EAX                        ; 005d73a7
    JZ 0x005d7432                       ; 005d73a9
        ;   XREF to: 005d7432 (CONDITIONAL_JUMP)  ; LAB_005d7432
    IMUL ESI,ESI,0x68                   ; 005d73af
    MOV EAX,dword ptr [EDI + 0xc]       ; 005d73b2
    PUSH EDI                            ; 005d73b5
    ADD EAX,ESI                         ; 005d73b6
    PUSH EAX                            ; 005d73b8
    MOV EBX,dword ptr [EDI + 0x40]      ; 005d73b9
    PUSH EDI                            ; 005d73bc
    XOR ESI,ESI                         ; 005d73bd
    CALL dword ptr [EBX + 0x30]         ; 005d73bf
    MOV EBP,dword ptr [EDI + 0x8]       ; 005d73c2
    ADD ESP,0xc                         ; 005d73c5
    TEST EBP,EBP                        ; 005d73c8
    JBE 0x005d7407                      ; 005d73ca
        ;   XREF to: 005d7407 (CONDITIONAL_JUMP)  ; LAB_005d7407
    XOR EBP,EBP                         ; 005d73cc
    MOV EBX,dword ptr [EDI + 0xc]       ; 005d73ce
        ;   Label: LAB_005d73ce
    ADD EBX,EBP                         ; 005d73d1
    TEST byte ptr [EBX + 0x61],0x20     ; 005d73d3
    JZ 0x005d73fc                       ; 005d73d7
        ;   XREF to: 005d73fc (CONDITIONAL_JUMP)  ; LAB_005d73fc
    PUSH EBX                            ; 005d73d9
    MOV ECX,dword ptr [ESP + 0x4]       ; 005d73da
    PUSH ECX                            ; 005d73de
    CALL shape_superopt.cpp_FUN_005c7a90 ; 005d73df
        ;   XREF to: 005c7a90 (UNCONDITIONAL_CALL)  ; int shape_superopt.cpp_FUN_005c7a90()
    ADD ESP,0x8                         ; 005d73e4
    TEST EAX,EAX                        ; 005d73e7
    JZ 0x005d7449                       ; 005d73e9
        ;   XREF to: 005d7449 (CONDITIONAL_JUMP)  ; LAB_005d7449
    MOV DH,byte ptr [EBX + 0x61]        ; 005d73eb
    OR DH,0x80                          ; 005d73ee
    MOV CL,DH                           ; 005d73f1
    MOV byte ptr [EBX + 0x61],DH        ; 005d73f3
    AND CL,0xdf                         ; 005d73f6
    MOV byte ptr [EBX + 0x61],CL        ; 005d73f9
    INC ESI                             ; 005d73fc
        ;   Label: LAB_005d73fc
    MOV EAX,dword ptr [EDI + 0x8]       ; 005d73fd
    ADD EBP,0x68                        ; 005d7400
    CMP ESI,EAX                         ; 005d7403
    JC 0x005d73ce                       ; 005d7405
        ;   XREF to: 005d73ce (CONDITIONAL_JUMP)  ; LAB_005d73ce
    MOV EDX,dword ptr [ESP]             ; 005d7407
        ;   Label: LAB_005d7407
    PUSH EDX                            ; 005d740a
    CALL shape_superopt.cpp_FUN_005c7b20 ; 005d740b
        ;   XREF to: 005c7b20 (UNCONDITIONAL_CALL)  ; undefined shape_superopt.cpp_FUN_005c7b20()
    ADD ESP,0x4                         ; 005d7410
    TEST EAX,EAX                        ; 005d7413
    JNZ 0x005d7369                      ; 005d7415
        ;   XREF to: 005d7369 (CONDITIONAL_JUMP)  ; LAB_005d7369
    PUSH 0x654749                       ; 005d741b | = "Unable to build complex polygon edge ..."
    CALL shape_superopt.cpp_logToFile_FUN_005c7910 ; 005d7420
        ;   XREF to: 005c7910 (UNCONDITIONAL_CALL)  ; void shape_superopt.cpp_logToFile_FUN_005c7910(char * format)
    ADD ESP,0x4                         ; 005d7425
    XOR EAX,EAX                         ; 005d7428
    ADD ESP,0x4                         ; 005d742a
    POP EBP                             ; 005d742d
    POP EDI                             ; 005d742e
    POP ESI                             ; 005d742f
    POP EBX                             ; 005d7430
    RET                                 ; 005d7431
    PUSH 0x6546f3                       ; 005d7432 | = "Unable to add polygon for complex pass"
        ;   Label: LAB_005d7432
    CALL shape_superopt.cpp_logToFile_FUN_005c7910 ; 005d7437
        ;   XREF to: 005c7910 (UNCONDITIONAL_CALL)  ; void shape_superopt.cpp_logToFile_FUN_005c7910(char * format)
    ADD ESP,0x4                         ; 005d743c
    XOR EAX,EAX                         ; 005d743f
    ADD ESP,0x4                         ; 005d7441
    POP EBP                             ; 005d7444
    POP EDI                             ; 005d7445
    POP ESI                             ; 005d7446
    POP EBX                             ; 005d7447
    RET                                 ; 005d7448
    PUSH 0x65471a                       ; 005d7449 | = "Unable to add shared triangle for com..."
        ;   Label: LAB_005d7449
    CALL shape_superopt.cpp_logToFile_FUN_005c7910 ; 005d744e
        ;   XREF to: 005c7910 (UNCONDITIONAL_CALL)  ; void shape_superopt.cpp_logToFile_FUN_005c7910(char * format)
    ADD ESP,0x4                         ; 005d7453
    XOR EAX,EAX                         ; 005d7456
    ADD ESP,0x4                         ; 005d7458
    POP EBP                             ; 005d745b
    POP EDI                             ; 005d745c
    POP ESI                             ; 005d745d
    POP EBX                             ; 005d745e
    RET                                 ; 005d745f

