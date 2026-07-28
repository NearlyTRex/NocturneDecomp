; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined * engine_clipper_c_allocateClipVertex_FUN_004314b0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_engine_clipper_c_0057ac47
;   TerminatedCString s_Ran_out_of_clipped_verts_0057ac5b
;   undefined4 DAT_007678f8
;   undefined4 DAT_00767b38
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    CMP dword ptr [0x00767b38],0xc      ; 004314b0 | DAT_00767b38
        ;   Label: engine_clipper.c_allocateClipVertex_FUN_004314b0
    JGE 0x004314d8                      ; 004314b7
        ;   XREF to: 004314d8 (CONDITIONAL_JUMP)  ; LAB_004314d8
    MOV ECX,dword ptr [0x00767b38]      ; 004314b9 | DAT_00767b38
        ;   Label: LAB_004314b9
    LEA EAX,[ECX*0x4 + 0x0]             ; 004314bf
    SUB EAX,ECX                         ; 004314c6
    INC ECX                             ; 004314c8
    SHL EAX,0x4                         ; 004314c9
    MOV dword ptr [0x00767b38],ECX      ; 004314cc | DAT_00767b38
    ADD EAX,0x7678f8                    ; 004314d2 | DAT_007678f8
    RET                                 ; 004314d7
    PUSH EBX                            ; 004314d8
        ;   Label: LAB_004314d8
    MOV ECX,0x57ac47                    ; 004314d9 | = "..\\engine\\clipper.c"
    MOV EBX,0x5e                        ; 004314de
    PUSH 0x57ac5b                       ; 004314e3 | = "Ran out of clipped verts!"
    MOV dword ptr [0x01cc4800],ECX      ; 004314e8 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 004314ee | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004314f4
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004314f9
    POP EBX                             ; 004314fc
    JMP 0x004314b9                      ; 004314fd
        ;   XREF to: 004314b9 (UNCONDITIONAL_JUMP)  ; LAB_004314b9

