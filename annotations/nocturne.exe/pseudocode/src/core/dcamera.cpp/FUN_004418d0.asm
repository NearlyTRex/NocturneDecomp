; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dcamera_cpp_FUN_004418d0(int param_1,int *param_2)
;
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   undefined4 DAT_01410280
;   undefined4 DAT_01410284
;   undefined4 DAT_01410288
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004418d0
        ;   Label: core_dcamera.cpp_FUN_004418d0
    PUSH EDI                            ; 004418d1
    PUSH EBP                            ; 004418d2
    SUB ESP,0x24                        ; 004418d3
    MOV ECX,dword ptr [ESP + 0x34]      ; 004418d6
    MOV EBX,ESI                         ; 004418da
    MOV ESI,dword ptr [ESP + 0x38]      ; 004418dc
    MOV EAX,dword ptr [ESI]             ; 004418e0
    SUB EAX,dword ptr [ECX + 0x16c]     ; 004418e2
    MOV EDI,dword ptr [ECX + 0x170]     ; 004418e8
    MOV dword ptr [ESP + 0x18],EAX      ; 004418ee
    MOV EAX,dword ptr [ESI + 0x4]       ; 004418f2
    SUB EAX,EDI                         ; 004418f5
    MOV EBP,dword ptr [ECX + 0x174]     ; 004418f7
    MOV dword ptr [ESP + 0x1c],EAX      ; 004418fd
    MOV EAX,dword ptr [ESI + 0x8]       ; 00441901
    SUB EAX,EBP                         ; 00441904
    MOV EDX,dword ptr [ESP + 0x18]      ; 00441906
    MOV dword ptr [ESP + 0x20],EAX      ; 0044190a
    MOV EAX,dword ptr [ECX + 0x180]     ; 0044190e
    IMUL EDX                            ; 00441914
    SHRD EAX,EDX,0x10                   ; 00441916
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0044191a
    MOV ESI,EAX                         ; 0044191e
    MOV EAX,dword ptr [ECX + 0x18c]     ; 00441920
    IMUL EDX                            ; 00441926
    SHRD EAX,EDX,0x10                   ; 00441928
    MOV EDX,dword ptr [ESP + 0x20]      ; 0044192c
    ADD ESI,EAX                         ; 00441930
    MOV EAX,dword ptr [ECX + 0x198]     ; 00441932
    IMUL EDX                            ; 00441938
    SHRD EAX,EDX,0x10                   ; 0044193a
    ADD ESI,EAX                         ; 0044193e
    MOV dword ptr [ESP + 0x8],ESI       ; 00441940
    TEST ESI,ESI                        ; 00441944
    JG 0x00441966                       ; 00441946
        ;   XREF to: 00441966 (CONDITIONAL_JUMP)  ; LAB_00441966
    LEA EDI,[ESP + 0xc]                 ; 00441948
        ;   Label: LAB_00441948
    MOV ESI,0x1410280                   ; 0044194c
    MOVSD ES:EDI,ESI                    ; 00441951 | DAT_01410280
        ;   Label: LAB_00441951
    MOVSD ES:EDI,ESI                    ; 00441952 | DAT_01410284
    MOVSD ES:EDI,ESI                    ; 00441953 | DAT_01410288
    LEA ESI,[ESP + 0xc]                 ; 00441954
    MOV EDI,EBX                         ; 00441958
    MOVSD ES:EDI,ESI                    ; 0044195a
    MOVSD ES:EDI,ESI                    ; 0044195b
    MOVSD ES:EDI,ESI                    ; 0044195c
    MOV EAX,EBX                         ; 0044195d
    ADD ESP,0x24                        ; 0044195f
    POP EBP                             ; 00441962
    POP EDI                             ; 00441963
    POP EBX                             ; 00441964
    RET                                 ; 00441965
    MOV EDX,dword ptr [ESP + 0x18]      ; 00441966
        ;   Label: LAB_00441966
    MOV EAX,dword ptr [ECX + 0x178]     ; 0044196a
    IMUL EDX                            ; 00441970
    SHRD EAX,EDX,0x10                   ; 00441972
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00441976
    MOV ESI,EAX                         ; 0044197a
    MOV EAX,dword ptr [ECX + 0x184]     ; 0044197c
    IMUL EDX                            ; 00441982
    SHRD EAX,EDX,0x10                   ; 00441984
    MOV EDX,dword ptr [ESP + 0x20]      ; 00441988
    ADD ESI,EAX                         ; 0044198c
    MOV EAX,dword ptr [ECX + 0x190]     ; 0044198e
    IMUL EDX                            ; 00441994
    SHRD EAX,EDX,0x10                   ; 00441996
    ADD ESI,EAX                         ; 0044199a
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044199c
    MOV dword ptr [ESP],ESI             ; 004419a0
    CMP ESI,EDX                         ; 004419a3
    JGE 0x00441948                      ; 004419a5
        ;   XREF to: 00441948 (CONDITIONAL_JUMP)  ; LAB_00441948
    MOV EDI,EDX                         ; 004419a7
    NEG EDI                             ; 004419a9
    CMP EDI,ESI                         ; 004419ab
    JGE 0x00441948                      ; 004419ad
        ;   XREF to: 00441948 (CONDITIONAL_JUMP)  ; LAB_00441948
    MOV EDX,dword ptr [ESP + 0x18]      ; 004419af
    MOV EAX,dword ptr [ECX + 0x17c]     ; 004419b3
    IMUL EDX                            ; 004419b9
    SHRD EAX,EDX,0x10                   ; 004419bb
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004419bf
    MOV ESI,EAX                         ; 004419c3
    MOV EAX,dword ptr [ECX + 0x188]     ; 004419c5
    IMUL EDX                            ; 004419cb
    SHRD EAX,EDX,0x10                   ; 004419cd
    MOV EDX,dword ptr [ESP + 0x20]      ; 004419d1
    ADD ESI,EAX                         ; 004419d5
    MOV EAX,dword ptr [ECX + 0x194]     ; 004419d7
    IMUL EDX                            ; 004419dd
    SHRD EAX,EDX,0x10                   ; 004419df
    ADD ESI,EAX                         ; 004419e3
    MOV EBP,dword ptr [ESP + 0x8]       ; 004419e5
    MOV dword ptr [ESP + 0x4],ESI       ; 004419e9
    CMP ESI,EBP                         ; 004419ed
    JGE 0x00441948                      ; 004419ef
        ;   XREF to: 00441948 (CONDITIONAL_JUMP)  ; LAB_00441948
    CMP EDI,ESI                         ; 004419f5
    JGE 0x00441948                      ; 004419f7
        ;   XREF to: 00441948 (CONDITIONAL_JUMP)  ; LAB_00441948
    LEA EDI,[ESP + 0xc]                 ; 004419fd
    MOV ESI,ESP                         ; 00441a01
    JMP 0x00441951                      ; 00441a03
        ;   XREF to: 00441951 (UNCONDITIONAL_JUMP)  ; LAB_00441951

