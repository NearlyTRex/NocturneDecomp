; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPathMap * __cdecl core_path_cpp_CPathMap_dtor_FUN_00511d10(CPathMap *this_ptr,uint flags)
;
; Parameters:
; CPathMap *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[8]:
;   core_hero.cpp_CHero_dtor_FUN_004ce3d0 at 004ce42e
;   core_hiram.cpp_CHiram_dtor_FUN_004d0f90 at 004d0fb3
;   core_hiram.cpp_CNPC_dtor_FUN_004d11c0 at 004d11d5
;   core_hostage.cpp_CHostage_dtor_FUN_004d36e0 at 004d36f5
;   core_hpriest.cpp_CHighPriestOfGardath_dtor_FUN_004d4880 at 004d4895
;   core_passngr.cpp_CPassenger_dtor_FUN_005114f0 at 00511543
;   core_tbplayer.cpp_CBassPlayer_dtor_FUN_00572110 at 00572125
;   core_tbplayer.cpp_CDrummer_dtor_FUN_00572060 at 00572075
;
; Referenced Globals:
;   undefined4 DAT_01e4fed8
;
; Called Functions:
;   crt_string.c_memmove_FUN_005ba1f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00511d10
        ;   Label: core_path.cpp_CPathMap_dtor_FUN_00511d10
    PUSH ESI                            ; 00511d11
    PUSH EDI                            ; 00511d12
    PUSH EBP                            ; 00511d13
    MOV EDI,dword ptr [0x01e4fed8]      ; 00511d14 | DAT_01e4fed8
    MOV ESI,dword ptr [ESP + 0x14]      ; 00511d1a
    XOR ECX,ECX                         ; 00511d1e
    TEST EDI,EDI                        ; 00511d20
    JLE 0x00511d41                      ; 00511d22
        ;   XREF to: 00511d41 (CONDITIONAL_JUMP)  ; LAB_00511d41
    LEA EBX,[EDI*0x4 + 0x0]             ; 00511d24
    XOR EAX,EAX                         ; 00511d2b
    MOV EBP,dword ptr [EAX + 0x1e4fedc] ; 00511d2d
        ;   Label: LAB_00511d2d
    LEA EDX,[EAX + 0x4]                 ; 00511d33
    CMP ESI,EBP                         ; 00511d36
    JZ 0x00511d4e                       ; 00511d38
        ;   XREF to: 00511d4e (CONDITIONAL_JUMP)  ; LAB_00511d4e
    MOV EAX,EDX                         ; 00511d3a
    INC ECX                             ; 00511d3c
    CMP EDX,EBX                         ; 00511d3d
    JL 0x00511d2d                       ; 00511d3f
        ;   XREF to: 00511d2d (CONDITIONAL_JUMP)  ; LAB_00511d2d
    MOV EAX,ESI                         ; 00511d41
        ;   Label: LAB_00511d41
    MOV dword ptr [0x01e4fed8],EDI      ; 00511d43 | DAT_01e4fed8
    POP EBP                             ; 00511d49
    POP EDI                             ; 00511d4a
    POP ESI                             ; 00511d4b
    POP EBX                             ; 00511d4c
    RET                                 ; 00511d4d
    DEC EDI                             ; 00511d4e
        ;   Label: LAB_00511d4e
    MOV EBX,EDI                         ; 00511d4f
    SUB EBX,ECX                         ; 00511d51
    LEA ECX,[EBX*0x4 + 0x0]             ; 00511d53
    PUSH ECX                            ; 00511d5a
    ADD EDX,0x1e4fedc                   ; 00511d5b
    PUSH EDX                            ; 00511d61
    ADD EAX,0x1e4fedc                   ; 00511d62
    PUSH EAX                            ; 00511d67
    MOV dword ptr [0x01e4fed8],EDI      ; 00511d68 | DAT_01e4fed8
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 00511d6e
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    MOV EDI,dword ptr [0x01e4fed8]      ; 00511d73 | DAT_01e4fed8
    XOR EAX,EAX                         ; 00511d79
    ADD ESP,0xc                         ; 00511d7b
    MOV dword ptr [EDI*0x4 + 0x1e4fedc],EAX ; 00511d7e
    MOV EAX,ESI                         ; 00511d85
    MOV dword ptr [0x01e4fed8],EDI      ; 00511d87 | DAT_01e4fed8
    POP EBP                             ; 00511d8d
    POP EDI                             ; 00511d8e
    POP ESI                             ; 00511d8f
    POP EBX                             ; 00511d90
    RET                                 ; 00511d91

