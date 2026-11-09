; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMouse * __cdecl engine_ncursfx_cpp_CMouse_ctor_FUN_00531220(CMouse *this_ptr)
;
; Parameters:
; CMouse *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   engine_ncursfx.cpp_staticInit_FUN_00531200 at 00531205
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005c0357
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00531220
        ;   Label: engine_ncursfx.cpp_CMouse_ctor_FUN_00531220
    PUSH 0x5fca10                       ; 00531224
    PUSH 0x8                            ; 00531229
    PUSH EAX                            ; 0053122b
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 0053122c
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005c0357()
    ADD ESP,0xc                         ; 00531231
    PUSH 0x5fca10                       ; 00531234
    PUSH 0x7                            ; 00531239
    ADD EAX,0xa0                        ; 0053123b
    PUSH EAX                            ; 00531240
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 00531241
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005c0357()
    ADD ESP,0xc                         ; 00531246
    PUSH 0x5fca10                       ; 00531249
    PUSH 0xf                            ; 0053124e
    ADD EAX,0x8c                        ; 00531250
    PUSH EAX                            ; 00531255
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 00531256
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005c0357()
    MOV dword ptr [EAX + 0x12c],0x0     ; 0053125b
    ADD ESP,0xc                         ; 00531265
    MOV dword ptr [EAX + 0x130],0x0     ; 00531268
    SUB EAX,0x12c                       ; 00531272
    RET                                 ; 00531277

