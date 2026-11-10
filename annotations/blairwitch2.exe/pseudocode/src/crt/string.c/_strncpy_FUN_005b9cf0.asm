; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl crt_string_c__strncpy_FUN_005b9cf0(char *dest,char *src,SIZE_T count)
;
; Parameters:
; char *           Stack[0x4]:4   dest
; char *           Stack[0x8]:4   src
; SIZE_T           Stack[0xc]:4   count
;
; XREF[12]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_00516270 at 0051627c
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_00517f60 at 00517f6f
;   core_netgame.cpp_CNetGame_processChatOut_FUN_0050d9f0 at 0050daef
;   core_patrpoin.cpp_FUN_0059c9c0 at 0059ca02
;   crt_unknown.c_FUN_005bfdd4 at 005c00bb
;   crt_unknown.c_FUN_005c59e0 at 005c5a2e
;   engine_dosio.cpp_FUN_00460fa0 at 00460fc8
;   engine_ini.cpp_CIni_getProfileString_FUN_004d8180 at 004d8347
;   engine_pod.cpp_findFilesByExtension_FUN_0051b3c0 at 0051b52a
;   shape_edittool.cpp_CInputString_init_FUN_0047a9d0 at 0047aa3c
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b9cf0
        ;   Label: crt_string.c__strncpy_FUN_005b9cf0
    PUSH ESI                            ; 005b9cf1
    MOV EAX,dword ptr [ESP + 0xc]       ; 005b9cf2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005b9cf6
    MOV EDX,dword ptr [ESP + 0x14]      ; 005b9cfa
    MOV ESI,EAX                         ; 005b9cfe
    TEST EDX,EDX                        ; 005b9d00
    JZ 0x005b9d13                       ; 005b9d02
        ;   XREF to: 005b9d13 (CONDITIONAL_JUMP)  ; LAB_005b9d13
    CMP byte ptr [EBX],0x0              ; 005b9d04
        ;   Label: LAB_005b9d04
    JZ 0x005b9d13                       ; 005b9d07
        ;   XREF to: 005b9d13 (CONDITIONAL_JUMP)  ; LAB_005b9d13
    INC EAX                             ; 005b9d09
    MOV CL,byte ptr [EBX]               ; 005b9d0a
    INC EBX                             ; 005b9d0c
    MOV byte ptr [EAX + -0x1],CL        ; 005b9d0d
    DEC EDX                             ; 005b9d10
    JNZ 0x005b9d04                      ; 005b9d11
        ;   XREF to: 005b9d04 (CONDITIONAL_JUMP)  ; LAB_005b9d04
    XOR EBX,EBX                         ; 005b9d13
        ;   Label: LAB_005b9d13
    TEST EDX,EDX                        ; 005b9d15
        ;   Label: LAB_005b9d15
    JZ 0x005b9d20                       ; 005b9d17
        ;   XREF to: 005b9d20 (CONDITIONAL_JUMP)  ; LAB_005b9d20
    INC EAX                             ; 005b9d19
    DEC EDX                             ; 005b9d1a
    MOV byte ptr [EAX + -0x1],BL        ; 005b9d1b
    JMP 0x005b9d15                      ; 005b9d1e
        ;   XREF to: 005b9d15 (UNCONDITIONAL_JUMP)  ; LAB_005b9d15
    MOV EAX,ESI                         ; 005b9d20
        ;   Label: LAB_005b9d20
    POP ESI                             ; 005b9d22
    POP EBX                             ; 005b9d23
    RET                                 ; 005b9d24

