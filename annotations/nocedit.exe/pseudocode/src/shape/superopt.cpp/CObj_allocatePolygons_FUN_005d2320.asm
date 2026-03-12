; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_superopt_cpp_CObj_allocatePolygons_FUN_005d2320(CObj *this_ptr,int poly_count)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   poly_count
; Local Variables:
; CPoly            Stack[-0x78]:104  local_78
; uint             Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   TerminatedCString s_Unable_to_allocate_RAM_f_0065432a
;
; Called Functions:
;   crt_memory.c_free_FUN_00601cd0
;   crt_memory.c_malloc_FUN_00601bb0
;   shape_superopt.cpp_CPoly_ctor_FUN_005cc620
;   shape_superopt.cpp_CPoly_dtor_FUN_005cc660
;   shape_superopt.cpp_logToFile_FUN_005c7910
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d2320
        ;   Label: shape_superopt.cpp_CObj_allocatePolygons_FUN_005d2320
    PUSH ESI                            ; 005d2321
    PUSH EBP                            ; 005d2322
    SUB ESP,0x6c                        ; 005d2323
    MOV EBX,dword ptr [ESP + 0x7c]      ; 005d2326
    MOV EAX,dword ptr [ESP + 0x80]      ; 005d232a
    MOV ESI,EAX                         ; 005d2331
    MOV dword ptr [EBX + 0x8],EAX       ; 005d2333
    SHL EAX,0x2                         ; 005d2336
    SUB EAX,ESI                         ; 005d2339
    SHL EAX,0x2                         ; 005d233b
    ADD EAX,ESI                         ; 005d233e
    SHL EAX,0x3                         ; 005d2340
    PUSH EAX                            ; 005d2343
    CALL crt_memory.c_malloc_FUN_00601bb0 ; 005d2344
        ;   XREF to: 00601bb0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_00601bb0(ulong size)
    ADD ESP,0x4                         ; 005d2349
    MOV dword ptr [EBX + 0xc],EAX       ; 005d234c
    TEST EAX,EAX                        ; 005d234f
    JNZ 0x005d2389                      ; 005d2351
        ;   XREF to: 005d2389 (CONDITIONAL_JUMP)  ; LAB_005d2389
    MOV ECX,dword ptr [EBX + 0x4]       ; 005d2353
    TEST ECX,ECX                        ; 005d2356
    JZ 0x005d2363                       ; 005d2358
        ;   XREF to: 005d2363 (CONDITIONAL_JUMP)  ; LAB_005d2363
    PUSH ECX                            ; 005d235a
    CALL crt_memory.c_free_FUN_00601cd0 ; 005d235b
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    ADD ESP,0x4                         ; 005d2360
    PUSH 0x65432a                       ; 005d2363 | = "Unable to allocate RAM for object pol..."
        ;   Label: LAB_005d2363
    MOV dword ptr [EBX + 0x4],0x0       ; 005d2368
    CALL shape_superopt.cpp_logToFile_FUN_005c7910 ; 005d236f
        ;   XREF to: 005c7910 (UNCONDITIONAL_CALL)  ; void shape_superopt.cpp_logToFile_FUN_005c7910(char * format)
    XOR ESI,ESI                         ; 005d2374
    ADD ESP,0x4                         ; 005d2376
    MOV dword ptr [EBX + 0x14],0x0      ; 005d2379
    MOV EAX,ESI                         ; 005d2380
    ADD ESP,0x6c                        ; 005d2382
    POP EBP                             ; 005d2385
    POP ESI                             ; 005d2386
    POP EBX                             ; 005d2387
    RET                                 ; 005d2388
    PUSH EDI                            ; 005d2389
        ;   Label: LAB_005d2389
    PUSH 0x0                            ; 005d238a
    LEA EAX,[ESP + 0x8]                 ; 005d238c
    PUSH EAX                            ; 005d2390
    XOR EDI,EDI                         ; 005d2391
    CALL shape_superopt.cpp_CPoly_ctor_FUN_005cc620 ; 005d2393
        ;   XREF to: 005cc620 (UNCONDITIONAL_CALL)  ; CPoly * shape_superopt.cpp_CPoly_ctor_FUN_005cc620(CPoly * this_ptr, CObj * parent_obj)
    ADD ESP,0x8                         ; 005d2398
    MOV EBP,dword ptr [EBX + 0x8]       ; 005d239b
    MOV dword ptr [ESP + 0x6c],EDI      ; 005d239e
    TEST EBP,EBP                        ; 005d23a2
    JBE 0x005d23f0                      ; 005d23a4
        ;   XREF to: 005d23f0 (CONDITIONAL_JUMP)  ; LAB_005d23f0
    XOR EBP,EBP                         ; 005d23a6
    MOV ECX,0x68                        ; 005d23a8
        ;   Label: LAB_005d23a8
    MOV EDI,dword ptr [EBX + 0xc]       ; 005d23ad
    LEA ESI,[ESP + 0x4]                 ; 005d23b0
    ADD EDI,EBP                         ; 005d23b4
    PUSH EDI                            ; 005d23b6
    MOV EAX,ECX                         ; 005d23b7
    SHR ECX,0x2                         ; 005d23b9
    MOVSD.REP ES:EDI,ESI                ; 005d23bc
    MOV CL,AL                           ; 005d23be
    AND CL,0x3                          ; 005d23c0
    MOVSB.REP ES:EDI,ESI                ; 005d23c3
    POP EDI                             ; 005d23c5
    MOV EAX,dword ptr [EBX + 0xc]       ; 005d23c6
    PUSH EBX                            ; 005d23c9
    ADD EAX,EBP                         ; 005d23ca
    PUSH EAX                            ; 005d23cc
    MOV ESI,dword ptr [EAX + 0x64]      ; 005d23cd
    CALL dword ptr [ESI]                ; 005d23d0
    ADD ESP,0x8                         ; 005d23d2
    MOV EAX,dword ptr [ESP + 0x6c]      ; 005d23d5
    ADD EBP,0x68                        ; 005d23d9
    INC EAX                             ; 005d23dc
    MOV EDX,dword ptr [EBX + 0x8]       ; 005d23dd
    MOV dword ptr [ESP + 0x6c],EAX      ; 005d23e0
    CMP EAX,EDX                         ; 005d23e4
    JC 0x005d23a8                       ; 005d23e6
        ;   XREF to: 005d23a8 (CONDITIONAL_JUMP)  ; LAB_005d23a8
    LEA EAX,[EAX]                       ; 005d23e8
    MOV EDX,EDX                         ; 005d23ee
    PUSH 0x0                            ; 005d23f0
        ;   Label: LAB_005d23f0
    LEA EAX,[ESP + 0x8]                 ; 005d23f2
    PUSH EAX                            ; 005d23f6
    MOV ESI,0x1                         ; 005d23f7
    CALL shape_superopt.cpp_CPoly_dtor_FUN_005cc660 ; 005d23fc
        ;   XREF to: 005cc660 (UNCONDITIONAL_CALL)  ; CPoly * shape_superopt.cpp_CPoly_dtor_FUN_005cc660(CPoly * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005d2401
    POP EDI                             ; 005d2404
    MOV EAX,ESI                         ; 005d2405
    ADD ESP,0x6c                        ; 005d2407
    POP EBP                             ; 005d240a
    POP ESI                             ; 005d240b
    POP EBX                             ; 005d240c
    RET                                 ; 005d240d

