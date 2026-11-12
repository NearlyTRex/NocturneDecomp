; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPathMap * __cdecl core_path_cpp_CPathMap_ctor_FUN_0050acc0(CPathMap *this_ptr)
;
; Parameters:
; CPathMap *       Stack[0x4]:4   this_ptr
;
; XREF[7]:
;   core_asgaya.cpp_CAsgaya_ctor_FUN_005a0a10 at 005a0a27
;   core_bird.cpp_CBird_ctor_FUN_0040f9f0 at 0040fa07
;   core_hero.cpp_CHero_ctor_FUN_004d24b0 at 004d24c4
;   core_npc.cpp_CNPC_ctor_FUN_00508f40 at 00508f57
;   core_spirbear.cpp_CSpiritBear_ctor_FUN_0059aaa0 at 0059aab9
;   core_spireagl.cpp_CSpiritEagle_ctor_FUN_005991d0 at 005991e9
;   core_spirindi.cpp_CSpiritIndian_ctor_FUN_00599f60 at 00599f79
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01ec1518
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   core_path.cpp_CPathMap_reset_FUN_0050cee0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050acc0
        ;   Label: core_path.cpp_CPathMap_ctor_FUN_0050acc0
    PUSH EDI                            ; 0050acc1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0050acc2
    MOV dword ptr [EBX + 0x138b8],0x7fffffff ; 0050acc6
    MOV EAX,dword ptr [EBX + 0x138b8]   ; 0050acd0
    MOV dword ptr [EBX + 0x138b4],EAX   ; 0050acd6
    PUSH EBX                            ; 0050acdc
    MOV dword ptr [EBX + 0x138b0],EAX   ; 0050acdd
    CALL core_path.cpp_CPathMap_reset_FUN_0050cee0 ; 0050ace3
        ;   XREF to: 0050cee0 (UNCONDITIONAL_CALL)  ; void core_path.cpp_CPathMap_reset_FUN_0050cee0(CPathMap * this_ptr)
    MOV EDX,dword ptr [0x01ec1518]      ; 0050ace8 | DAT_01ec1518
    ADD ESP,0x4                         ; 0050acee
    CMP EDX,0xc8                        ; 0050acf1
    JGE 0x0050ad13                      ; 0050acf7
        ;   XREF to: 0050ad13 (CONDITIONAL_JUMP)  ; LAB_0050ad13
    MOV EAX,[0x01ec1518]                ; 0050acf9 | DAT_01ec1518
        ;   Label: LAB_0050acf9
    LEA EDI,[EAX + 0x1]                 ; 0050acfe
    MOV dword ptr [EAX*0x4 + 0x1ec151c],EBX ; 0050ad01
    MOV dword ptr [0x01ec1518],EDI      ; 0050ad08 | DAT_01ec1518
    MOV EAX,EBX                         ; 0050ad0e
    POP EDI                             ; 0050ad10
    POP EBX                             ; 0050ad11
    RET                                 ; 0050ad12
    PUSH ESI                            ; 0050ad13
        ;   Label: LAB_0050ad13
    MOV ECX,0x5cb76e                    ; 0050ad14
    MOV ESI,0x123                       ; 0050ad19
    PUSH 0x5cb77f                       ; 0050ad1e
    MOV dword ptr [0x01d71de0],ECX      ; 0050ad23 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0050ad29 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0050ad2f
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0050ad34
    POP ESI                             ; 0050ad37
    JMP 0x0050acf9                      ; 0050ad38
        ;   XREF to: 0050acf9 (UNCONDITIONAL_JUMP)  ; LAB_0050acf9

