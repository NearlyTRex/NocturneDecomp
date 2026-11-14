; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dtrace_cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00473b20(CDemonRaytrace *this_ptr,char *filename)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; XREF[1]:
;   core_set.cpp_FUN_00532b80 at 00533607
;
; Referenced Globals:
;   undefined4 DAT_005bca01
;   undefined4 DAT_005bca04
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_00473940
;   crt_stdio.c_fclose_FUN_005a3a90
;   engine_dosio.cpp_FUN_004659c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00473b20
        ;   Label: core_dtrace.cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00473b20
    PUSH 0x5bca01                       ; 00473b21 | DAT_005bca01
    MOV EDX,dword ptr [ESP + 0x10]      ; 00473b26
    PUSH EDX                            ; 00473b2a
    PUSH 0x5bca04                       ; 00473b2b | DAT_005bca04
    CALL engine_dosio.cpp_FUN_004659c0  ; 00473b30
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_004659c0(char * directory, char * filename, char * mode)
    MOV EBX,EAX                         ; 00473b35
    ADD ESP,0xc                         ; 00473b37
    TEST EAX,EAX                        ; 00473b3a
    JNZ 0x00473b40                      ; 00473b3c
        ;   XREF to: 00473b40 (CONDITIONAL_JUMP)  ; LAB_00473b40
    POP EBX                             ; 00473b3e
    RET                                 ; 00473b3f
    PUSH EAX                            ; 00473b40
        ;   Label: LAB_00473b40
    MOV ECX,dword ptr [ESP + 0xc]       ; 00473b41
    PUSH ECX                            ; 00473b45
    CALL core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_00473940 ; 00473b46
        ;   XREF to: 00473940 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_00473940(CDemonRaytrace * this_ptr, _FILE * param_2)
    ADD ESP,0x8                         ; 00473b4b
    PUSH EBX                            ; 00473b4e
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 00473b4f
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    MOV EAX,0x1                         ; 00473b54
    ADD ESP,0x4                         ; 00473b59
    POP EBX                             ; 00473b5c
    RET                                 ; 00473b5d

