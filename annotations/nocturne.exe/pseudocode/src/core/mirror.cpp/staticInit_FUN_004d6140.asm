; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mirror_cpp_staticInit_FUN_004d6140(void)
;
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005644a7
;
; *****************************************************************************

section .text

    PUSH 0x5993b0                       ; 004d6140
        ;   Label: core_mirror.cpp_staticInit_FUN_004d6140
    PUSH 0x20                           ; 004d6145
    PUSH 0x1cc9124                      ; 004d6147
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 004d614c
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    ADD ESP,0xc                         ; 004d6151
    PUSH 0x5993b0                       ; 004d6154
    PUSH 0x20                           ; 004d6159
    PUSH 0x1cc92a8                      ; 004d615b
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 004d6160
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    ADD ESP,0xc                         ; 004d6165
    RET                                 ; 004d6168

