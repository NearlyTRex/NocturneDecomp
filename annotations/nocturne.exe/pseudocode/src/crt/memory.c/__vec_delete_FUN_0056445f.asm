; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * __cdecl crt_memory_c___vec_delete_FUN_0056445f(int param_1,undefined4 param_2)
;
;
; XREF[136]:
;   FUN_0040ef90 at 0040efbc
;   FUN_0040f4b0 at 0040f4dc
;   FUN_0040f8b0 at 0040f8dc
;   FUN_0040fc30 at 0040fcc7
;   FUN_004100f0 at 0041011c
;   FUN_00411610 at 0041163c
;   FUN_00411660 at 0041168c
;   FUN_004118c0 at 004118ec
;   FUN_004132c0 at 00413357
;   FUN_00414c60 at 00414cf7
;   ... and 126 more
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056445f
        ;   Label: crt_memory.c___vec_delete_FUN_0056445f
    MOV EAX,dword ptr [ESP + 0x8]       ; 00564460
    TEST EAX,EAX                        ; 00564464
    JNZ 0x0056446e                      ; 00564466
        ;   XREF to: 0056446e (CONDITIONAL_JUMP)  ; LAB_0056446e
    XOR EBX,EBX                         ; 00564468
    MOV EAX,EBX                         ; 0056446a
    POP EBX                             ; 0056446c
    RET                                 ; 0056446d
    MOV EDX,dword ptr [ESP + 0xc]       ; 0056446e
        ;   Label: LAB_0056446e
    LEA EBX,[EAX + -0x4]                ; 00564472
    PUSH EDX                            ; 00564475
    MOV ECX,dword ptr [EBX]             ; 00564476
    PUSH ECX                            ; 00564478
    PUSH EAX                            ; 00564479
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0056447a
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_0056494f()
    ADD ESP,0xc                         ; 0056447f
    MOV EAX,EBX                         ; 00564482
    POP EBX                             ; 00564484
    RET                                 ; 00564485

