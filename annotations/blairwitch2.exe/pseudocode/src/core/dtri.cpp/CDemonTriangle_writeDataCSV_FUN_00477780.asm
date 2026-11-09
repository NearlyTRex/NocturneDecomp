; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtri_cpp_CDemonTriangle_writeDataCSV_FUN_00477780(CDemonTriangle *this_ptr,_FILE *file_handle)
;
; Parameters:
; CDemonTriangle * Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; Called Functions:
;   crt_unknown.c_FUN_005b8010
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00477780
        ;   Label: core_dtri.cpp_CDemonTriangle_writeDataCSV_FUN_00477780
    SUB ESP,0x8                         ; 00477784
    FLD float ptr [EAX + 0x20]          ; 00477787
    FSTP double ptr [ESP]               ; 0047778a
    SUB ESP,0x8                         ; 0047778d
    FLD float ptr [EAX + 0x1c]          ; 00477790
    FSTP double ptr [ESP]               ; 00477793
    SUB ESP,0x8                         ; 00477796
    FLD float ptr [EAX + 0x18]          ; 00477799
    FSTP double ptr [ESP]               ; 0047779c
    SUB ESP,0x8                         ; 0047779f
    FLD float ptr [EAX + 0x14]          ; 004777a2
    FSTP double ptr [ESP]               ; 004777a5
    SUB ESP,0x8                         ; 004777a8
    FLD float ptr [EAX + 0x10]          ; 004777ab
    FSTP double ptr [ESP]               ; 004777ae
    SUB ESP,0x8                         ; 004777b1
    FLD float ptr [EAX + 0xc]           ; 004777b4
    FSTP double ptr [ESP]               ; 004777b7
    SUB ESP,0x8                         ; 004777ba
    FLD float ptr [EAX + 0x8]           ; 004777bd
    FSTP double ptr [ESP]               ; 004777c0
    SUB ESP,0x8                         ; 004777c3
    FLD float ptr [EAX + 0x4]           ; 004777c6
    FSTP double ptr [ESP]               ; 004777c9
    SUB ESP,0x8                         ; 004777cc
    FLD float ptr [EAX]                 ; 004777cf
    FSTP double ptr [ESP]               ; 004777d1
    PUSH 0x5d1db7                       ; 004777d4
    MOV EDX,dword ptr [ESP + 0x54]      ; 004777d9
    PUSH EDX                            ; 004777dd
    CALL crt_unknown.c_FUN_005b8010     ; 004777de
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x50                        ; 004777e3
    RET                                 ; 004777e6

