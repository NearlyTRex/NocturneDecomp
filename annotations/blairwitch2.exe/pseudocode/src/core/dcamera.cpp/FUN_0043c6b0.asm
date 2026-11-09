; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dcamera_cpp_FUN_0043c6b0(undefined4 param_1,int param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[6]:
;   core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0043d870 at 0043d92b
;   core_dcamera.cpp_FUN_00441ea0 at 00441ebe
;   core_dcamera.cpp_FUN_00443610 at 00443756
;   core_game.cpp_FUN_004b5190 at 004b537e
;   core_game.cpp_FUN_004be8a0 at 004bed99
;   core_sound.cpp_updateListeners_FUN_00558d50 at 005590fa
;
; Referenced Globals:
;   undefined4 DAT_01c2b64c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043c6b0
        ;   Label: core_dcamera.cpp_FUN_0043c6b0
    PUSH EDI                            ; 0043c6b1
    SUB ESP,0xc                         ; 0043c6b2
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0043c6b5
    MOV EDX,dword ptr [ESP + 0x20]      ; 0043c6b9
    MOV ECX,ESI                         ; 0043c6bd
    MOV EBX,EAX                         ; 0043c6bf
    SHL EBX,0x10                        ; 0043c6c1
    MOV dword ptr [ESP],EBX             ; 0043c6c4
    MOV EBX,EDX                         ; 0043c6c7
    MOV EDX,dword ptr [EDX*0x4 + 0x1c2b64c] ; 0043c6c9 | DAT_01c2b64c
    SHL EBX,0x10                        ; 0043c6d0
    MOV EAX,dword ptr [EDX + EAX*0x4]   ; 0043c6d3
    MOV dword ptr [ESP + 0x4],EBX       ; 0043c6d6
    MOV dword ptr [ESP + 0x8],EAX       ; 0043c6da
    TEST EAX,EAX                        ; 0043c6de
    JNZ 0x0043c6f9                      ; 0043c6e0
        ;   XREF to: 0043c6f9 (CONDITIONAL_JUMP)  ; LAB_0043c6f9
    MOV dword ptr [ESP + 0x8],0x7fffffff ; 0043c6e2
    MOV ESI,ESP                         ; 0043c6ea
    MOV EDI,ECX                         ; 0043c6ec
    MOVSD ES:EDI,ESI                    ; 0043c6ee
    MOVSD ES:EDI,ESI                    ; 0043c6ef
    MOVSD ES:EDI,ESI                    ; 0043c6f0
    MOV EAX,ECX                         ; 0043c6f1
    ADD ESP,0xc                         ; 0043c6f3
    POP EDI                             ; 0043c6f6
    POP EBX                             ; 0043c6f7
    RET                                 ; 0043c6f8
    MOV EAX,0x7fffffff                  ; 0043c6f9
        ;   Label: LAB_0043c6f9
    MOV EDX,EAX                         ; 0043c6fe
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043c700
    SAR EDX,0x1f                        ; 0043c704
    IDIV EBX                            ; 0043c707
    MOV dword ptr [ESP + 0x8],EAX       ; 0043c709
    MOV ESI,ESP                         ; 0043c70d
    MOV EDI,ECX                         ; 0043c70f
    MOVSD ES:EDI,ESI                    ; 0043c711
    MOVSD ES:EDI,ESI                    ; 0043c712
    MOVSD ES:EDI,ESI                    ; 0043c713
    MOV EAX,ECX                         ; 0043c714
    ADD ESP,0xc                         ; 0043c716
    POP EDI                             ; 0043c719
    POP EBX                             ; 0043c71a
    RET                                 ; 0043c71b

