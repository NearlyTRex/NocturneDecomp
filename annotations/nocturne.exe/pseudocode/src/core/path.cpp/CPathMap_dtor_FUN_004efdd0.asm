; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPathMap * __cdecl core_path_cpp_CPathMap_dtor_FUN_004efdd0(CPathMap *this_ptr,uint flags)
;
; Parameters:
; CPathMap *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[8]:
;   core_hero.cpp_CHero_dtor_FUN_004b4800 at 004b483e
;   core_hiram.cpp_CHiram_dtor_FUN_004b6670 at 004b6693
;   core_hostage.cpp_CHostage_dtor_FUN_004b8b70 at 004b8b89
;   core_hpriest.cpp_FUN_004b9bf0 at 004b9c09
;   core_npc.cpp_CNPC_dtor_FUN_004b68c0 at 004b68d9
;   core_passngr.cpp_FUN_004ef5c0 at 004ef613
;   core_tbplayer.cpp_FUN_00543620 at 00543639
;   core_tbplayer.cpp_FUN_005436f0 at 00543709
;
; Referenced Globals:
;   undefined4 DAT_01e312f8
;
; Called Functions:
;   crt_string.c_memmove_FUN_00566170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004efdd0
        ;   Label: core_path.cpp_CPathMap_dtor_FUN_004efdd0
    PUSH ESI                            ; 004efdd1
    PUSH EDI                            ; 004efdd2
    PUSH EBP                            ; 004efdd3
    MOV EDI,dword ptr [0x01e312f8]      ; 004efdd4 | DAT_01e312f8
    MOV ESI,dword ptr [ESP + 0x14]      ; 004efdda
    XOR ECX,ECX                         ; 004efdde
    TEST EDI,EDI                        ; 004efde0
    JLE 0x004efe01                      ; 004efde2
        ;   XREF to: 004efe01 (CONDITIONAL_JUMP)  ; LAB_004efe01
    LEA EBX,[EDI*0x4 + 0x0]             ; 004efde4
    XOR EAX,EAX                         ; 004efdeb
    MOV EBP,dword ptr [EAX + 0x1e312fc] ; 004efded
        ;   Label: LAB_004efded
    LEA EDX,[EAX + 0x4]                 ; 004efdf3
    CMP ESI,EBP                         ; 004efdf6
    JZ 0x004efe0e                       ; 004efdf8
        ;   XREF to: 004efe0e (CONDITIONAL_JUMP)  ; LAB_004efe0e
    MOV EAX,EDX                         ; 004efdfa
    INC ECX                             ; 004efdfc
    CMP EDX,EBX                         ; 004efdfd
    JL 0x004efded                       ; 004efdff
        ;   XREF to: 004efded (CONDITIONAL_JUMP)  ; LAB_004efded
    MOV EAX,ESI                         ; 004efe01
        ;   Label: LAB_004efe01
    MOV dword ptr [0x01e312f8],EDI      ; 004efe03 | DAT_01e312f8
    POP EBP                             ; 004efe09
    POP EDI                             ; 004efe0a
    POP ESI                             ; 004efe0b
    POP EBX                             ; 004efe0c
    RET                                 ; 004efe0d
    DEC EDI                             ; 004efe0e
        ;   Label: LAB_004efe0e
    MOV EBX,EDI                         ; 004efe0f
    SUB EBX,ECX                         ; 004efe11
    LEA ECX,[EBX*0x4 + 0x0]             ; 004efe13
    PUSH ECX                            ; 004efe1a
    ADD EDX,0x1e312fc                   ; 004efe1b
    PUSH EDX                            ; 004efe21
    ADD EAX,0x1e312fc                   ; 004efe22
    PUSH EAX                            ; 004efe27
    MOV dword ptr [0x01e312f8],EDI      ; 004efe28 | DAT_01e312f8
    CALL crt_string.c_memmove_FUN_00566170 ; 004efe2e
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_00566170(void * dest, void * src, SIZE_T n)
    MOV EDI,dword ptr [0x01e312f8]      ; 004efe33 | DAT_01e312f8
    XOR EAX,EAX                         ; 004efe39
    ADD ESP,0xc                         ; 004efe3b
    MOV dword ptr [EDI*0x4 + 0x1e312fc],EAX ; 004efe3e
    MOV EAX,ESI                         ; 004efe45
    MOV dword ptr [0x01e312f8],EDI      ; 004efe47 | DAT_01e312f8
    POP EBP                             ; 004efe4d
    POP EDI                             ; 004efe4e
    POP ESI                             ; 004efe4f
    POP EBX                             ; 004efe50
    RET                                 ; 004efe51

