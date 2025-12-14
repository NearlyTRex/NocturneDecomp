; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_superopt.cpp_CObj_addPolygons_FUN_005d2410(CObj * this_ptr, int add_count)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   add_count
; Local Variables:
; undefined1       Stack[-0x78]:1  local_78
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   TerminatedCString s_Unable_to_add_polygons_t_00654355
;
; Called Functions:
;   crt_memory.c_realloc_FUN_00601df0
;   shape_superopt.cpp_CPoly_ctor_FUN_005cc620
;   shape_superopt.cpp_CPoly_dtor_FUN_005cc660
;   shape_superopt.cpp_logToFile_FUN_005c7910
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d2410
        ;   Label: shape_superopt.cpp_CObj_addPolygons_FUN_005d2410
    PUSH ESI                            ; 005d2411
    PUSH EBP                            ; 005d2412
    SUB ESP,0x6c                        ; 005d2413
    MOV EBX,dword ptr [ESP + 0x7c]      ; 005d2416
    MOV EDX,dword ptr [ESP + 0x80]      ; 005d241a
    MOV ESI,dword ptr [EBX + 0x8]       ; 005d2421
    ADD ESI,EDX                         ; 005d2424
    LEA EAX,[ESI*0x4 + 0x0]             ; 005d2426
    SUB EAX,ESI                         ; 005d242d
    SHL EAX,0x2                         ; 005d242f
    ADD EAX,ESI                         ; 005d2432
    SHL EAX,0x3                         ; 005d2434
    PUSH EAX                            ; 005d2437
    MOV ECX,dword ptr [EBX + 0xc]       ; 005d2438
    PUSH ECX                            ; 005d243b
    CALL crt_memory.c_realloc_FUN_00601df0 ; 005d243c
        ;   XREF to: 00601df0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_00601df0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 005d2441
    TEST EAX,EAX                        ; 005d2444
    JZ 0x005d24c6                       ; 005d2446
        ;   XREF to: 005d24c6 (CONDITIONAL_JUMP)  ; LAB_005d24c6
    PUSH EDI                            ; 005d244c
    PUSH 0x0                            ; 005d244d
    MOV dword ptr [EBX + 0xc],EAX       ; 005d244f
    LEA EAX,[ESP + 0x8]                 ; 005d2452
    PUSH EAX                            ; 005d2456
    CALL shape_superopt.cpp_CPoly_ctor_FUN_005cc620 ; 005d2457
        ;   XREF to: 005cc620 (UNCONDITIONAL_CALL)  ; CPoly * shape_superopt.cpp_CPoly_ctor_FUN_005cc620(CPoly * this_ptr)
    ADD ESP,0x8                         ; 005d245c
    MOV EAX,dword ptr [EBX + 0x8]       ; 005d245f
    MOV dword ptr [ESP + 0x6c],EAX      ; 005d2462
    LEA EBP,[EAX*0x4 + 0x0]             ; 005d2466
    SUB EBP,EAX                         ; 005d246d
    SHL EBP,0x2                         ; 005d246f
    ADD EBP,EAX                         ; 005d2472
    SHL EBP,0x3                         ; 005d2474
    MOV EDI,dword ptr [ESP + 0x84]      ; 005d2477
        ;   Label: LAB_005d2477
    MOV ESI,dword ptr [EBX + 0x8]       ; 005d247e
    MOV EAX,dword ptr [ESP + 0x6c]      ; 005d2481
    ADD ESI,EDI                         ; 005d2485
    CMP ESI,EAX                         ; 005d2487
    JBE 0x005d24de                      ; 005d2489
        ;   XREF to: 005d24de (CONDITIONAL_JUMP)  ; LAB_005d24de
    MOV ECX,0x68                        ; 005d248b
    MOV EDI,dword ptr [EBX + 0xc]       ; 005d2490
    LEA ESI,[ESP + 0x4]                 ; 005d2493
    ADD EDI,EBP                         ; 005d2497
    PUSH EDI                            ; 005d2499
    MOV EAX,ECX                         ; 005d249a
    SHR ECX,0x2                         ; 005d249c
    MOVSD.REP ES:EDI,ESI                ; 005d249f
    MOV CL,AL                           ; 005d24a1
    AND CL,0x3                          ; 005d24a3
    MOVSB.REP ES:EDI,ESI                ; 005d24a6
    POP EDI                             ; 005d24a8
    MOV ESI,dword ptr [EBX + 0xc]       ; 005d24a9
    PUSH EBX                            ; 005d24ac
    ADD ESI,EBP                         ; 005d24ad
    PUSH ESI                            ; 005d24af
    MOV EAX,dword ptr [ESI + 0x64]      ; 005d24b0
    CALL dword ptr [EAX]                ; 005d24b3
    ADD ESP,0x8                         ; 005d24b5
    MOV EDX,dword ptr [ESP + 0x6c]      ; 005d24b8
    INC EDX                             ; 005d24bc
    ADD EBP,0x68                        ; 005d24bd
    MOV dword ptr [ESP + 0x6c],EDX      ; 005d24c0
    JMP 0x005d2477                      ; 005d24c4
        ;   XREF to: 005d2477 (UNCONDITIONAL_JUMP)  ; LAB_005d2477
    PUSH 0x654355                       ; 005d24c6 | = "Unable to add polygons to object"
        ;   Label: LAB_005d24c6
    CALL shape_superopt.cpp_logToFile_FUN_005c7910 ; 005d24cb
        ;   XREF to: 005c7910 (UNCONDITIONAL_CALL)  ; void shape_superopt.cpp_logToFile_FUN_005c7910(char * format)
    XOR ESI,ESI                         ; 005d24d0
    ADD ESP,0x4                         ; 005d24d2
    MOV EAX,ESI                         ; 005d24d5
    ADD ESP,0x6c                        ; 005d24d7
    POP EBP                             ; 005d24da
    POP ESI                             ; 005d24db
    POP EBX                             ; 005d24dc
    RET                                 ; 005d24dd
    PUSH 0x0                            ; 005d24de
        ;   Label: LAB_005d24de
    LEA EAX,[ESP + 0x8]                 ; 005d24e0
    PUSH EAX                            ; 005d24e4
    MOV dword ptr [EBX + 0x8],ESI       ; 005d24e5
    MOV ESI,0x1                         ; 005d24e8
    CALL shape_superopt.cpp_CPoly_dtor_FUN_005cc660 ; 005d24ed
        ;   XREF to: 005cc660 (UNCONDITIONAL_CALL)  ; CPoly * shape_superopt.cpp_CPoly_dtor_FUN_005cc660(CPoly * this_ptr)
    ADD ESP,0x8                         ; 005d24f2
    POP EDI                             ; 005d24f5
    MOV EAX,ESI                         ; 005d24f6
    ADD ESP,0x6c                        ; 005d24f8
    POP EBP                             ; 005d24fb
    POP ESI                             ; 005d24fc
    POP EBX                             ; 005d24fd
    RET                                 ; 005d24fe

