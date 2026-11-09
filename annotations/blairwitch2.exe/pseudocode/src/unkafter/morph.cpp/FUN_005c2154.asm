; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_morph_cpp_FUN_005c2154(undefined4 param_1)
;
;
; XREF[2]:
;   crt_startup.cpp_WinMainBootstrap_FUN_005c2020 at 005c20c3
;   crt_unknown.c_FUN_005bb007 at 005bb026
;
; Referenced Globals:
;   void* PTR_unkafter_morph.cpp_FUN_005c2150_0061f654 = 005c2150
;   undefined4 DAT_02680170
;
; Called Functions:
;   unkafter_morph.cpp_FUN_005c2150
;   unkafter_morph.cpp_FUN_005c2180
;   unkafter_morph.cpp_FUN_005c3388
;
; *****************************************************************************

section .text

    CALL dword ptr [0x0061f654]         ; 005c2154 | PTR_unkafter_morph.cpp_FUN_005c2150_0061f654
        ;   Label: unkafter_morph.cpp_FUN_005c2154
    CMP byte ptr [0x02680170],0x0       ; 005c215a | DAT_02680170
    JNZ 0x005c2172                      ; 005c2161
        ;   XREF to: 005c2172 (CONDITIONAL_JUMP)  ; LAB_005c2172
    MOV EDX,0xff                        ; 005c2163
    MOV EAX,0x10                        ; 005c2168
    CALL unkafter_morph.cpp_FUN_005c3388 ; 005c216d
        ;   XREF to: 005c3388 (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c3388()
    MOV EDX,dword ptr [ESP + 0x4]       ; 005c2172
        ;   Label: LAB_005c2172
    PUSH EDX                            ; 005c2176
    CALL unkafter_morph.cpp_FUN_005c2180 ; 005c2177
        ;   XREF to: 005c2180 (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c2180()
    ADD ESP,0x4                         ; 005c217c
    RET                                 ; 005c217f

