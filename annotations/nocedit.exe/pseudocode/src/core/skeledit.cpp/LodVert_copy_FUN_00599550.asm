; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CLodVert * core_skeledit.cpp_LodVert_copy_FUN_00599550(void * n1, void * n2, CLodVert * other2, CLodVert * other3)
;
; Parameters:
; void *           Stack[0x4]:4   n1
; void *           Stack[0x8]:4   n2
; CLodVert *       Stack[0xc]:4   other2
; CLodVert *       Stack[0x10]:4   other3
;
; Called Functions:
;   crt_stack.c_stack_probe_FUN_005ff9f3
;
; *****************************************************************************

section .text

    PUSH 0xc                            ; 00599550
        ;   Label: core_skeledit.cpp_LodVert_copy_FUN_00599550
    CALL crt_stack.c_stack_probe_FUN_005ff9f3 ; 00599555 | uint crt_stack.c_stack_probe_FUN_005ff9f3(uint stack_size)
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
    PUSH ESI                            ; 0059955a
    PUSH EDI                            ; 0059955b
    MOV ECX,dword ptr [ESP + 0xc]       ; 0059955c
    MOV EDX,dword ptr [ESP + 0x10]      ; 00599560
    MOV EAX,dword ptr [EDX]             ; 00599564
    MOV dword ptr [ECX],EAX             ; 00599566
    LEA EAX,[ECX + 0x4]                 ; 00599568
    LEA ECX,[EDX + 0x4]                 ; 0059956b
    MOV ECX,dword ptr [ECX]             ; 0059956e
    MOV dword ptr [EAX],ECX             ; 00599570
    LEA ECX,[EDX + 0x8]                 ; 00599572
    MOV ECX,dword ptr [ECX]             ; 00599575
    MOV dword ptr [EAX + 0x4],ECX       ; 00599577
    MOV ECX,0xfa                        ; 0059957a
    LEA EDI,[EAX + 0x8]                 ; 0059957f
    LEA ESI,[EDX + 0xc]                 ; 00599582
    MOVSD.REP ES:EDI,ESI                ; 00599585
    MOV ECX,dword ptr [EDX + 0x3f4]     ; 00599587
    MOV dword ptr [EAX + 0x3f0],ECX     ; 0059958d
    ADD EAX,0x4                         ; 00599593
    MOV ECX,dword ptr [EDX + 0x3f8]     ; 00599596
    LEA EDI,[EAX + 0x3f4]               ; 0059959c
    MOV dword ptr [EAX + 0x3f0],ECX     ; 005995a2
    MOV ECX,0x32                        ; 005995a8
    LEA ESI,[EDX + 0x3fc]               ; 005995ad
    SUB EAX,0x8                         ; 005995b3
    MOVSD.REP ES:EDI,ESI                ; 005995b6
    POP EDI                             ; 005995b8
    POP ESI                             ; 005995b9
    RET                                 ; 005995ba

