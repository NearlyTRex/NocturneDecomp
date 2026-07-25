; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0(int param_1,int param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[5]:
;   FUN_004421b0 at 00442276
;   FUN_00446760 at 00446781
;   FUN_00447f20 at 00448060
;   FUN_0049cc10 at 0049cdf9
;   core_sound.cpp_updateListeners_FUN_0052c9d0 at 0052cd7b
;
; Referenced Globals:
;   undefined4 DAT_01bd4260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004410c0
        ;   Label: core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0
    PUSH EDI                            ; 004410c1
    PUSH EBP                            ; 004410c2
    SUB ESP,0xc                         ; 004410c3
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004410c6
    MOV EDX,dword ptr [ESP + 0x20]      ; 004410ca
    MOV ECX,ESI                         ; 004410ce
    MOV EAX,dword ptr [EBX + 0x144]     ; 004410d0
    ADD EAX,EDX                         ; 004410d6
    SHL EAX,0x10                        ; 004410d8
    MOV ESI,dword ptr [EBX + 0x148]     ; 004410db
    MOV dword ptr [ESP],EAX             ; 004410e1
    MOV EAX,dword ptr [ESP + 0x24]      ; 004410e4
    ADD EAX,ESI                         ; 004410e8
    SHL EDX,0x2                         ; 004410ea
    MOV ESI,EAX                         ; 004410ed
    MOV EAX,dword ptr [EAX*0x4 + 0x1bd4260] ; 004410ef | DAT_01bd4260
    ADD EDX,EAX                         ; 004410f6
    MOV EAX,dword ptr [EBX + 0x144]     ; 004410f8
    SHL ESI,0x10                        ; 004410fe
    MOV EAX,dword ptr [EDX + EAX*0x4]   ; 00441101
    MOV dword ptr [ESP + 0x4],ESI       ; 00441104
    MOV dword ptr [ESP + 0x8],EAX       ; 00441108
    TEST EAX,EAX                        ; 0044110c
    JNZ 0x00441128                      ; 0044110e
        ;   XREF to: 00441128 (CONDITIONAL_JUMP)  ; LAB_00441128
    MOV dword ptr [ESP + 0x8],0x7fffffff ; 00441110
    MOV ESI,ESP                         ; 00441118
    MOV EDI,ECX                         ; 0044111a
    MOVSD ES:EDI,ESI                    ; 0044111c
    MOVSD ES:EDI,ESI                    ; 0044111d
    MOVSD ES:EDI,ESI                    ; 0044111e
    MOV EAX,ECX                         ; 0044111f
    ADD ESP,0xc                         ; 00441121
    POP EBP                             ; 00441124
    POP EDI                             ; 00441125
    POP EBX                             ; 00441126
    RET                                 ; 00441127
    MOV EAX,0x7fffffff                  ; 00441128
        ;   Label: LAB_00441128
    MOV EDX,EAX                         ; 0044112d
    MOV EBP,dword ptr [ESP + 0x8]       ; 0044112f
    SAR EDX,0x1f                        ; 00441133
    IDIV EBP                            ; 00441136
    MOV dword ptr [ESP + 0x8],EAX       ; 00441138
    MOV ESI,ESP                         ; 0044113c
    MOV EDI,ECX                         ; 0044113e
    MOVSD ES:EDI,ESI                    ; 00441140
    MOVSD ES:EDI,ESI                    ; 00441141
    MOVSD ES:EDI,ESI                    ; 00441142
    MOV EAX,ECX                         ; 00441143
    ADD ESP,0xc                         ; 00441145
    POP EBP                             ; 00441148
    POP EDI                             ; 00441149
    POP EBX                             ; 0044114a
    RET                                 ; 0044114b

