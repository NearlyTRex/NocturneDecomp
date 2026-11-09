; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dracbrid_cpp_FUN_00464f10(CDraculaBride *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CDraculaBride *  Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; XREF[1]:
;   core_dracbrid.cpp_FUN_00464f60 at 00464ff7
;
; Referenced Globals:
;   TerminatedCString s_Shot_thru_the_heart_005d1180
;   undefined4 DAT_005d119c
;   CConsole* g_CConsolePtr = 007c158c
;   CConsole g_CConsoleInstance
;
; Called Functions:
;   engine_console.cpp_FUN_00436710
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 00464f10
        ;   Label: core_dracbrid.cpp_FUN_00464f10
    MOV EAX,dword ptr [ESP + 0x10]      ; 00464f13
    CMP dword ptr [EAX + 0x30],0x6c     ; 00464f17
    JZ 0x00464f31                       ; 00464f1b
        ;   XREF to: 00464f31 (CONDITIONAL_JUMP)  ; LAB_00464f31
    MOV ECX,dword ptr [ESP + 0xc]       ; 00464f1d
    MOV EDX,dword ptr [EAX]             ; 00464f21
    CMP EDX,dword ptr [ECX + 0x10b10]   ; 00464f23
    JNZ 0x00464f31                      ; 00464f29
        ;   XREF to: 00464f31 (CONDITIONAL_JUMP)  ; LAB_00464f31
    CMP dword ptr [EAX + 0x30],0x68     ; 00464f2b
    JZ 0x00464f35                       ; 00464f2f
        ;   XREF to: 00464f35 (CONDITIONAL_JUMP)  ; LAB_00464f35
    ADD ESP,0x8                         ; 00464f31
        ;   Label: LAB_00464f31
    RET                                 ; 00464f34
    PUSH EDI                            ; 00464f35
        ;   Label: LAB_00464f35
    FLD float ptr [EAX + 0x4]           ; 00464f36
    PUSH 0x5d1180                       ; 00464f39 | = "Shot thru the heart\n"
    MOV EDI,dword ptr [0x00609ed0]      ; 00464f3e | g_CConsolePtr
    FLD ST0                             ; 00464f44
    FMUL double ptr [0x005d119c]        ; 00464f46 | DAT_005d119c
    PUSH EDI                            ; 00464f4c | g_CConsoleInstance
    FSTP ST1                            ; 00464f4d
    FSTP float ptr [EAX + 0x4]          ; 00464f4f
    CALL engine_console.cpp_FUN_00436710 ; 00464f52
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x8                         ; 00464f57
    POP EDI                             ; 00464f5a
    ADD ESP,0x8                         ; 00464f5b
    RET                                 ; 00464f5e

