; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtri_cpp_CDemonTriangle_writeDataCSV_FUN_0048fc70(CDemonTriangle *this_ptr,_FILE *file_handle)
;
; Parameters:
; CDemonTriangle * Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; Called Functions:
;   crt_unknown.c_FUN_005c03c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0048fc70
        ;   Label: core_dtri.cpp_CDemonTriangle_writeDataCSV_FUN_0048fc70
    SUB ESP,0x8                         ; 0048fc74
    FLD float ptr [EAX + 0x20]          ; 0048fc77
    FSTP double ptr [ESP]               ; 0048fc7a
    SUB ESP,0x8                         ; 0048fc7d
    FLD float ptr [EAX + 0x1c]          ; 0048fc80
    FSTP double ptr [ESP]               ; 0048fc83
    SUB ESP,0x8                         ; 0048fc86
    FLD float ptr [EAX + 0x18]          ; 0048fc89
    FSTP double ptr [ESP]               ; 0048fc8c
    SUB ESP,0x8                         ; 0048fc8f
    FLD float ptr [EAX + 0x14]          ; 0048fc92
    FSTP double ptr [ESP]               ; 0048fc95
    SUB ESP,0x8                         ; 0048fc98
    FLD float ptr [EAX + 0x10]          ; 0048fc9b
    FSTP double ptr [ESP]               ; 0048fc9e
    SUB ESP,0x8                         ; 0048fca1
    FLD float ptr [EAX + 0xc]           ; 0048fca4
    FSTP double ptr [ESP]               ; 0048fca7
    SUB ESP,0x8                         ; 0048fcaa
    FLD float ptr [EAX + 0x8]           ; 0048fcad
    FSTP double ptr [ESP]               ; 0048fcb0
    SUB ESP,0x8                         ; 0048fcb3
    FLD float ptr [EAX + 0x4]           ; 0048fcb6
    FSTP double ptr [ESP]               ; 0048fcb9
    SUB ESP,0x8                         ; 0048fcbc
    FLD float ptr [EAX]                 ; 0048fcbf
    FSTP double ptr [ESP]               ; 0048fcc1
    PUSH 0x5dbbb0                       ; 0048fcc4
    MOV EDX,dword ptr [ESP + 0x54]      ; 0048fcc9
    PUSH EDX                            ; 0048fccd
    CALL crt_unknown.c_FUN_005c03c0     ; 0048fcce
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x50                        ; 0048fcd3
    RET                                 ; 0048fcd6

