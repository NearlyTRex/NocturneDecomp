; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPathMap * __cdecl core_path_cpp_CPathMap_ctor_FUN_00532fe0(CPathMap *this_ptr)
;
; Parameters:
; CPathMap *       Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_hero.cpp_CHero_ctor_FUN_004ea830 at 004ea844
;   core_npc.cpp_CNPC_ctor_FUN_00531670 at 00531687
;   unkafter_bird.cpp_CBird_ctor_FUN_004151f0 at 00415207
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01e6be48
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   core_path.cpp_CPathMap_reset_FUN_00535200
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00532fe0
        ;   Label: core_path.cpp_CPathMap_ctor_FUN_00532fe0
    PUSH EDI                            ; 00532fe1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00532fe2
    MOV dword ptr [EBX + 0x138b8],0x7fffffff ; 00532fe6
    MOV EAX,dword ptr [EBX + 0x138b8]   ; 00532ff0
    MOV dword ptr [EBX + 0x138b4],EAX   ; 00532ff6
    PUSH EBX                            ; 00532ffc
    MOV dword ptr [EBX + 0x138b0],EAX   ; 00532ffd
    CALL core_path.cpp_CPathMap_reset_FUN_00535200 ; 00533003
        ;   XREF to: 00535200 (UNCONDITIONAL_CALL)  ; void core_path.cpp_CPathMap_reset_FUN_00535200(CPathMap * this_ptr)
    MOV EDX,dword ptr [0x01e6be48]      ; 00533008 | DAT_01e6be48
    ADD ESP,0x4                         ; 0053300e
    CMP EDX,0xc8                        ; 00533011
    JGE 0x00533033                      ; 00533017
        ;   XREF to: 00533033 (CONDITIONAL_JUMP)  ; LAB_00533033
    MOV EAX,[0x01e6be48]                ; 00533019 | DAT_01e6be48
        ;   Label: LAB_00533019
    LEA EDI,[EAX + 0x1]                 ; 0053301e
    MOV dword ptr [EAX*0x4 + 0x1e6be4c],EBX ; 00533021
    MOV dword ptr [0x01e6be48],EDI      ; 00533028 | DAT_01e6be48
    MOV EAX,EBX                         ; 0053302e
    POP EDI                             ; 00533030
    POP EBX                             ; 00533031
    RET                                 ; 00533032
    PUSH ESI                            ; 00533033
        ;   Label: LAB_00533033
    MOV ECX,0x5ec906                    ; 00533034
    MOV ESI,0x123                       ; 00533039
    PUSH 0x5ec917                       ; 0053303e
    MOV dword ptr [0x01d1d400],ECX      ; 00533043 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00533049 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0053304f
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00533054
    POP ESI                             ; 00533057
    JMP 0x00533019                      ; 00533058
        ;   XREF to: 00533019 (UNCONDITIONAL_JUMP)  ; LAB_00533019

