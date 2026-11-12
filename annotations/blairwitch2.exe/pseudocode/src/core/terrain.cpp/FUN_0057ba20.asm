; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_terrain_cpp_FUN_0057ba20(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   engine_font.cpp_FUN_004a859e at 004a8659
;
; Called Functions:
;   core_terrain.cpp_FUN_0057bb80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057ba20
        ;   Label: core_terrain.cpp_FUN_0057ba20
    SUB ESP,0x4                         ; 0057ba21
    LEA EAX,[ESP + 0x14]                ; 0057ba24
    MOV dword ptr [ESP],EAX             ; 0057ba28
    MOV EAX,ESP                         ; 0057ba2b
    PUSH EAX                            ; 0057ba2d
    MOV EDX,dword ptr [ESP + 0x14]      ; 0057ba2e
    PUSH EDX                            ; 0057ba32
    MOV ECX,dword ptr [ESP + 0x14]      ; 0057ba33
    PUSH ECX                            ; 0057ba37
    XOR EBX,EBX                         ; 0057ba38
    CALL core_terrain.cpp_FUN_0057bb80  ; 0057ba3a
        ;   XREF to: 0057bb80 (UNCONDITIONAL_CALL)  ; undefined core_terrain.cpp_FUN_0057bb80()
    ADD ESP,0xc                         ; 0057ba3f
    MOV dword ptr [ESP],EBX             ; 0057ba42
    ADD ESP,0x4                         ; 0057ba45
    POP EBX                             ; 0057ba48
    RET                                 ; 0057ba49

