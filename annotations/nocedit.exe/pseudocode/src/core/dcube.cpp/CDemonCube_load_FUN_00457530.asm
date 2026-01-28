; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dcube_cpp_CDemonCube_load_FUN_00457530(CDemonCube *this_ptr,FILE *file_handle)
;
; Parameters:
; CDemonCube *     Stack[0x4]:4   this_ptr
; FILE *           Stack[0x8]:4   file_handle
;
; XREF[1]:
;   core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0 at 004948f2
;
; Called Functions:
;   core_dcube.cpp_CDemonCube_allocGeometryMemory_FUN_00456840
;   core_dcube.cpp_CDemonCubeTriangle_readFromFile_FUN_004551d0
;   crt_stdio.c_fread_FUN_005fd990
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00457530
        ;   Label: core_dcube.cpp_CDemonCube_load_FUN_00457530
    PUSH ESI                            ; 00457531
    PUSH EDI                            ; 00457532
    PUSH EBP                            ; 00457533
    MOV ESI,dword ptr [ESP + 0x14]      ; 00457534
    MOV EBP,dword ptr [ESP + 0x18]      ; 00457538
    PUSH EBP                            ; 0045753c
    PUSH 0xc                            ; 0045753d
    PUSH 0x1                            ; 0045753f
    LEA EAX,[ESI + 0x8]                 ; 00457541
    PUSH EAX                            ; 00457544
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00457545
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 0045754a
    PUSH EBP                            ; 0045754d
    PUSH 0xc                            ; 0045754e
    PUSH 0x1                            ; 00457550
    LEA EAX,[ESI + 0x14]                ; 00457552
    PUSH EAX                            ; 00457555
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00457556
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 0045755b
    PUSH EBP                            ; 0045755e
    PUSH 0x4                            ; 0045755f
    PUSH 0x1                            ; 00457561
    LEA EAX,[ESI + 0x20]                ; 00457563
    PUSH EAX                            ; 00457566
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00457567
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 0045756c
    PUSH EBP                            ; 0045756f
    PUSH 0x4                            ; 00457570
    PUSH 0x1                            ; 00457572
    LEA EAX,[ESI + 0x28]                ; 00457574
    PUSH EAX                            ; 00457577
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00457578
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
    MOV EDX,dword ptr [ESI + 0x28]      ; 0045757d
    ADD ESP,0x10                        ; 00457580
    TEST EDX,EDX                        ; 00457583
    JNZ 0x004575f2                      ; 00457585
        ;   XREF to: 004575f2 (CONDITIONAL_JUMP)  ; LAB_004575f2
    PUSH EBP                            ; 00457587
        ;   Label: LAB_00457587
    PUSH 0xc                            ; 00457588
    MOV ECX,dword ptr [ESI + 0x20]      ; 0045758a
    PUSH ECX                            ; 0045758d
    MOV EBX,dword ptr [ESI + 0x24]      ; 0045758e
    PUSH EBX                            ; 00457591
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00457592
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 00457597
    MOV EDI,dword ptr [ESI + 0x28]      ; 0045759a
    XOR EBX,EBX                         ; 0045759d
    TEST EDI,EDI                        ; 0045759f
    JLE 0x004575d0                      ; 004575a1
        ;   XREF to: 004575d0 (CONDITIONAL_JUMP)  ; LAB_004575d0
    XOR EDI,EDI                         ; 004575a3
    MOV EAX,dword ptr [ESI + 0x24]      ; 004575a5
        ;   Label: LAB_004575a5
    PUSH EAX                            ; 004575a8
    MOV EAX,dword ptr [ESI + 0x2c]      ; 004575a9
    PUSH EBP                            ; 004575ac
    ADD EAX,EDI                         ; 004575ad
    PUSH EAX                            ; 004575af
    INC EBX                             ; 004575b0
    CALL core_dcube.cpp_CDemonCubeTriangle_readFromFile_FUN_004551d0 ; 004575b1
        ;   XREF to: 004551d0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_CDemonCubeTriangle_readFromFile_FUN_004551d0(CDemonCubeTriangle * this_ptr, FILE * file_handle, CVector3f * vertex_buffer_base)
    ADD EDI,0x20                        ; 004575b6
    MOV EDX,dword ptr [ESI + 0x28]      ; 004575b9
    ADD ESP,0xc                         ; 004575bc
    CMP EBX,EDX                         ; 004575bf
    JL 0x004575a5                       ; 004575c1
        ;   XREF to: 004575a5 (CONDITIONAL_JUMP)  ; LAB_004575a5
    LEA EAX,[EAX]                       ; 004575c3
    LEA EDX,[EDX]                       ; 004575c9
    NOP                                 ; 004575cf
    MOV ECX,dword ptr [ESI + 0x28]      ; 004575d0
        ;   Label: LAB_004575d0
    TEST ECX,ECX                        ; 004575d3
    JZ 0x004575e7                       ; 004575d5
        ;   XREF to: 004575e7 (CONDITIONAL_JUMP)  ; LAB_004575e7
    PUSH EBP                            ; 004575d7
    PUSH ECX                            ; 004575d8
    PUSH 0x1                            ; 004575d9
    MOV EDI,dword ptr [ESI + 0x30]      ; 004575db
    PUSH EDI                            ; 004575de
    CALL crt_stdio.c_fread_FUN_005fd990 ; 004575df
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 004575e4
    CMP dword ptr [ESI + 0x28],0x0      ; 004575e7
        ;   Label: LAB_004575e7
    JNZ 0x004575fd                      ; 004575eb
        ;   XREF to: 004575fd (CONDITIONAL_JUMP)  ; LAB_004575fd
    POP EBP                             ; 004575ed
    POP EDI                             ; 004575ee
    POP ESI                             ; 004575ef
    POP EBX                             ; 004575f0
    RET                                 ; 004575f1
    PUSH ESI                            ; 004575f2
        ;   Label: LAB_004575f2
    CALL core_dcube.cpp_CDemonCube_allocGeometryMemory_FUN_00456840 ; 004575f3
        ;   XREF to: 00456840 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_CDemonCube_allocGeometryMemory_FUN_00456840(CDemonCube * this_ptr)
    ADD ESP,0x4                         ; 004575f8
    JMP 0x00457587                      ; 004575fb
        ;   XREF to: 00457587 (UNCONDITIONAL_JUMP)  ; LAB_00457587
    PUSH EBP                            ; 004575fd
        ;   Label: LAB_004575fd
    PUSH 0x40                           ; 004575fe
    PUSH 0x1                            ; 00457600
    MOV EDX,dword ptr [ESI]             ; 00457602
    PUSH EDX                            ; 00457604
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00457605
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
    MOV ECX,0x40                        ; 0045760a
    ADD ESP,0x10                        ; 0045760f
    MOV EAX,dword ptr [ESI]             ; 00457612
    MOV EDI,dword ptr [ESI + 0x4]       ; 00457614
    MOV ESI,EAX                         ; 00457617
    PUSH EDI                            ; 00457619
    MOV EAX,ECX                         ; 0045761a
    SHR ECX,0x2                         ; 0045761c
    MOVSD.REP ES:EDI,ESI                ; 0045761f
    MOV CL,AL                           ; 00457621
    AND CL,0x3                          ; 00457623
    MOVSB.REP ES:EDI,ESI                ; 00457626
    POP EDI                             ; 00457628
    POP EBP                             ; 00457629
    POP EDI                             ; 0045762a
    POP ESI                             ; 0045762b
    POP EBX                             ; 0045762c
    RET                                 ; 0045762d

