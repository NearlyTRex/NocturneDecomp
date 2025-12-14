; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_fileio.cpp_CFileManager_setVersionControlCredentials_FUN_004bc5d0(CFileManager * this_ptr, char * network_username, char * password, char * domain)
;
; Parameters:
; CFileManager *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   network_username
; char *           Stack[0xc]:4   password
; char *           Stack[0x10]:4   domain
;
; Referenced Globals:
;   undefined4 g_VersionControlSession.network_username[0]
;   undefined4 g_VersionControlSession.network_username[1]
;   undefined4 g_VersionControlSession.network_username[2]
;   undefined4 g_VersionControlSession.network_username[3]
;   undefined4 g_VersionControlSession.password[0]
;   undefined4 g_VersionControlSession.password[1]
;   undefined4 g_VersionControlSession.password[2]
;   undefined4 g_VersionControlSession.password[3]
;   undefined4 g_VersionControlSession.domain[0]
;   undefined4 g_VersionControlSession.domain[1]
;   undefined4 g_VersionControlSession.domain[2]
;   undefined4 g_VersionControlSession.domain[3]
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004bc5d0
        ;   Label: engine_fileio.cpp_CFileManager_setVersionControlCredentials_FUN_004bc5d0
    PUSH EDI                            ; 004bc5d1
    MOV ECX,dword ptr [ESP + 0x14]      ; 004bc5d2
    MOV EDX,dword ptr [ESP + 0x18]      ; 004bc5d6
    MOV ESI,dword ptr [ESP + 0x10]      ; 004bc5da
    MOV EDI,0x2d12bf8                   ; 004bc5de | g_VersionControlSession.network_username[0]
    PUSH EDI                            ; 004bc5e3 | g_VersionControlSession.network_username[0]
    MOV AL,byte ptr [ESI]               ; 004bc5e4
        ;   Label: LAB_004bc5e4
    MOV byte ptr [EDI],AL               ; 004bc5e6 | g_VersionControlSession.network_username[0] | g_VersionControlSession.network_username[2]
    CMP AL,0x0                          ; 004bc5e8
    JZ 0x004bc5fc                       ; 004bc5ea
        ;   XREF to: 004bc5fc (CONDITIONAL_JUMP)  ; LAB_004bc5fc
    MOV AL,byte ptr [ESI + 0x1]         ; 004bc5ec
    ADD ESI,0x2                         ; 004bc5ef
    MOV byte ptr [EDI + 0x1],AL         ; 004bc5f2 | g_VersionControlSession.network_username[1] | g_VersionControlSession.network_username[3]
    ADD EDI,0x2                         ; 004bc5f5
    CMP AL,0x0                          ; 004bc5f8
    JNZ 0x004bc5e4                      ; 004bc5fa
        ;   XREF to: 004bc5e4 (CONDITIONAL_JUMP)  ; LAB_004bc5e4
    POP EDI                             ; 004bc5fc
        ;   Label: LAB_004bc5fc
    MOV EDI,0x2d12c60                   ; 004bc5fd | g_VersionControlSession.password[0]
    MOV ESI,ECX                         ; 004bc602
    PUSH EDI                            ; 004bc604 | g_VersionControlSession.password[0]
    MOV AL,byte ptr [ESI]               ; 004bc605
        ;   Label: LAB_004bc605
    MOV byte ptr [EDI],AL               ; 004bc607 | g_VersionControlSession.password[0] | g_VersionControlSession.password[2]
    CMP AL,0x0                          ; 004bc609
    JZ 0x004bc61d                       ; 004bc60b
        ;   XREF to: 004bc61d (CONDITIONAL_JUMP)  ; LAB_004bc61d
    MOV AL,byte ptr [ESI + 0x1]         ; 004bc60d
    ADD ESI,0x2                         ; 004bc610
    MOV byte ptr [EDI + 0x1],AL         ; 004bc613 | g_VersionControlSession.password[1] | g_VersionControlSession.password[3]
    ADD EDI,0x2                         ; 004bc616
    CMP AL,0x0                          ; 004bc619
    JNZ 0x004bc605                      ; 004bc61b
        ;   XREF to: 004bc605 (CONDITIONAL_JUMP)  ; LAB_004bc605
    POP EDI                             ; 004bc61d
        ;   Label: LAB_004bc61d
    MOV EDI,0x2d12cc8                   ; 004bc61e | g_VersionControlSession.domain[0]
    MOV ESI,EDX                         ; 004bc623
    PUSH EDI                            ; 004bc625 | g_VersionControlSession.domain[0]
    MOV AL,byte ptr [ESI]               ; 004bc626
        ;   Label: LAB_004bc626
    MOV byte ptr [EDI],AL               ; 004bc628 | g_VersionControlSession.domain[0] | g_VersionControlSession.domain[2]
    CMP AL,0x0                          ; 004bc62a
    JZ 0x004bc63e                       ; 004bc62c
        ;   XREF to: 004bc63e (CONDITIONAL_JUMP)  ; LAB_004bc63e
    MOV AL,byte ptr [ESI + 0x1]         ; 004bc62e
    ADD ESI,0x2                         ; 004bc631
    MOV byte ptr [EDI + 0x1],AL         ; 004bc634 | g_VersionControlSession.domain[1] | g_VersionControlSession.domain[3]
    ADD EDI,0x2                         ; 004bc637
    CMP AL,0x0                          ; 004bc63a
    JNZ 0x004bc626                      ; 004bc63c
        ;   XREF to: 004bc626 (CONDITIONAL_JUMP)  ; LAB_004bc626
    POP EDI                             ; 004bc63e
        ;   Label: LAB_004bc63e
    POP EDI                             ; 004bc63f
    POP ESI                             ; 004bc640
    RET                                 ; 004bc641

