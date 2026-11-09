; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_setdir_cpp_FUN_005398d0(CDemonSet *param_1,_FILE *param_2)
;
; Local Variables:
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   core_setdir.cpp_FUN_00539860 at 0053989f
;   core_setdir.cpp_FUN_00539d50 at 00539d57
;
; Referenced Globals:
;   void* PTR_LAB_005398b4 = 0053992b
;   TerminatedCString s_core_setdir_cpp_005e6025
;   TerminatedCString s_Hell_froze_005e6038
;   undefined4 DAT_005e6045
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_setdir.cpp_CDemonSet_freeThumbs_FUN_00539be0
;   core_setdir.cpp_CZThumb_saveZBufferTable_FUN_00538470
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005398d0
        ;   Label: core_setdir.cpp_FUN_005398d0
    SUB ESP,0xa0                        ; 005398d1
    MOV EDX,dword ptr [ESP + 0xa8]      ; 005398d7
    PUSH EDX                            ; 005398de
    XOR EBP,EBP                         ; 005398df
    CALL core_setdir.cpp_CDemonSet_freeThumbs_FUN_00539be0 ; 005398e1
        ;   XREF to: 00539be0 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CDemonSet_freeThumbs_FUN_00539be0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005398e6
    MOV EAX,dword ptr [ESP + 0xa8]      ; 005398e9
        ;   Label: LAB_005398e9
    CMP EBP,dword ptr [EAX]             ; 005398f0
    JGE 0x00539bd4                      ; 005398f2
        ;   XREF to: 00539bd4 (CONDITIONAL_JUMP)  ; LAB_00539bd4
    PUSH EDI                            ; 005398f8
    PUSH ESI                            ; 005398f9
    PUSH EBX                            ; 005398fa
    IMUL EAX,EBP,0x1a4                  ; 005398fb
    MOV EDX,dword ptr [ESP + 0xb4]      ; 00539901
    ADD EDX,0x4                         ; 00539908
    ADD EDX,EAX                         ; 0053990b
    MOV EBX,dword ptr [EDX + 0x140]     ; 0053990d
    MOV dword ptr [ESP + 0xa8],EDX      ; 00539913
    TEST EBX,EBX                        ; 0053991a
    JZ 0x00539b85                       ; 0053991c
        ;   XREF to: 00539b85 (CONDITIONAL_JUMP)  ; LAB_00539b85
    XOR EBX,EBX                         ; 00539922
    JMP dword ptr [EBX*0x4 + 0x5398b4]  ; 00539924 | PTR_LAB_005398b4 | LAB_0053992b
        ;   Label: LAB_00539924
    XOR EDI,EDI                         ; 0053992b
        ;   Label: LAB_0053992b
    LEA ESI,[ESP + 0x6c]                ; 0053992d
    MOV dword ptr [ESP + 0x74],EDI      ; 00539931
    MOV dword ptr [ESP + 0x70],EDI      ; 00539935
    MOV dword ptr [ESP + 0x6c],EDI      ; 00539939
    LEA EDI,[ESP + 0x30]                ; 0053993d
    LEA EAX,[ESP + 0x30]                ; 00539941
    LEA EDX,[ESP + 0x3c]                ; 00539945
    MOVSD ES:EDI,ESI                    ; 00539949
    MOVSD ES:EDI,ESI                    ; 0053994a
    MOVSD ES:EDI,ESI                    ; 0053994b
    CMP EDX,EAX                         ; 0053994c
    JZ 0x00539968                       ; 0053994e
        ;   XREF to: 00539968 (CONDITIONAL_JUMP)  ; LAB_00539968
    MOV EAX,dword ptr [ESP + 0x30]      ; 00539950
    MOV dword ptr [ESP + 0x3c],EAX      ; 00539954
    MOV EAX,dword ptr [ESP + 0x34]      ; 00539958
    MOV dword ptr [ESP + 0x40],EAX      ; 0053995c
    MOV EAX,dword ptr [ESP + 0x38]      ; 00539960
    MOV dword ptr [ESP + 0x44],EAX      ; 00539964
        ;   Label: LAB_00539964
    MOV ECX,dword ptr [ESP + 0xb8]      ; 00539968
        ;   Label: LAB_00539968
    PUSH ECX                            ; 0053996f
    PUSH 0x3f800000                     ; 00539970
    PUSH 0x40                           ; 00539975
    PUSH 0x40                           ; 00539977
    LEA EAX,[ESP + 0x4c]                ; 00539979
    PUSH EAX                            ; 0053997d
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0053997e
    ADD EAX,0x100                       ; 00539985
    PUSH EAX                            ; 0053998a
    MOV EAX,EBP                         ; 0053998b
    SHL EAX,0x4                         ; 0053998d
    MOV EDX,EAX                         ; 00539990
    SHL EAX,0x4                         ; 00539992
    MOV ECX,0x2093d34                   ; 00539995
    SUB EAX,EDX                         ; 0053999a
    ADD ECX,EAX                         ; 0053999c
    LEA EAX,[EBX*0x4 + 0x0]             ; 0053999e
    ADD EAX,EBX                         ; 005399a5
    SHL EAX,0x3                         ; 005399a7
    ADD EAX,ECX                         ; 005399aa
    PUSH EAX                            ; 005399ac
    INC EBX                             ; 005399ad
    CALL core_setdir.cpp_CZThumb_saveZBufferTable_FUN_00538470 ; 005399ae
        ;   XREF to: 00538470 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CZThumb_saveZBufferTable_FUN_00538470(CZThumb * this_ptr, CVector3f * camera_pos, CVector3f * look_at_pos, int width, ...)
    ADD ESP,0x1c                        ; 005399b3
    CMP EBX,0x6                         ; 005399b6
    JGE 0x005399ec                      ; 005399b9
        ;   XREF to: 005399ec (CONDITIONAL_JUMP)  ; LAB_005399ec
    CMP EBX,0x5                         ; 005399bb
    JBE 0x00539924                      ; 005399be
        ;   XREF to: 00539924 (CONDITIONAL_JUMP)  ; LAB_00539924
    MOV ESI,0x5e6025                    ; 005399c4 | = "..\\core\\setdir.cpp"
    MOV EDI,0x3aa                       ; 005399c9
    PUSH 0x5e6038                       ; 005399ce | = "Hell froze"
    MOV dword ptr [0x01d046a0],ESI      ; 005399d3 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 005399d9 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005399df
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005399e4
    JMP 0x00539968                      ; 005399e7
        ;   XREF to: 00539968 (UNCONDITIONAL_JUMP)  ; LAB_00539968
    INC EBP                             ; 005399ec
        ;   Label: LAB_005399ec
    POP EBX                             ; 005399ed
    POP ESI                             ; 005399ee
    POP EDI                             ; 005399ef
    JMP 0x005398e9                      ; 005399f0
        ;   XREF to: 005398e9 (UNCONDITIONAL_JUMP)  ; LAB_005398e9
    MOV ESI,dword ptr [ESP + 0xb8]      ; 00539b85
        ;   Label: LAB_00539b85
    FLD float ptr [EDX + 0x144]         ; 00539b8c
    PUSH ESI                            ; 00539b92
    FMUL double ptr [0x005e6045]        ; 00539b93 | DAT_005e6045
    SUB ESP,0x4                         ; 00539b99
    FSTP float ptr [ESP]                ; 00539b9c
    PUSH 0x30                           ; 00539b9f
    PUSH 0x40                           ; 00539ba1
    LEA EAX,[EDX + 0x10c]               ; 00539ba3
    PUSH EAX                            ; 00539ba9
    LEA EAX,[EDX + 0x100]               ; 00539baa
    PUSH EAX                            ; 00539bb0
    MOV EAX,EBP                         ; 00539bb1
    SHL EAX,0x4                         ; 00539bb3
    MOV EBX,EAX                         ; 00539bb6
    SHL EAX,0x4                         ; 00539bb8
    SUB EAX,EBX                         ; 00539bbb
    ADD EAX,0x2093d34                   ; 00539bbd
    PUSH EAX                            ; 00539bc2
    CALL core_setdir.cpp_CZThumb_saveZBufferTable_FUN_00538470 ; 00539bc3
        ;   XREF to: 00538470 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CZThumb_saveZBufferTable_FUN_00538470(CZThumb * this_ptr, CVector3f * camera_pos, CVector3f * look_at_pos, int width, ...)
    ADD ESP,0x1c                        ; 00539bc8
    INC EBP                             ; 00539bcb
    POP EBX                             ; 00539bcc
    POP ESI                             ; 00539bcd
    POP EDI                             ; 00539bce
    JMP 0x005398e9                      ; 00539bcf
        ;   XREF to: 005398e9 (UNCONDITIONAL_JUMP)  ; LAB_005398e9
    ADD ESP,0xa0                        ; 00539bd4
        ;   Label: LAB_00539bd4
    POP EBP                             ; 00539bda
    RET                                 ; 00539bdb

