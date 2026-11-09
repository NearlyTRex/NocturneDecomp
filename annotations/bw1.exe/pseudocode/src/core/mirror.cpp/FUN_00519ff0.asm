; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_mirror_cpp_FUN_00519ff0(undefined4 param_1,int *param_2)
;
; Local Variables:
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined        Stack[-0x18]:1  local_18
;
; XREF[1]:
;   core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_00552490 at 00552615
;
; Referenced Globals:
;   undefined4 DAT_00603ce0
;   undefined4 DAT_00603ce8
;
; Called Functions:
;   core_mirror.cpp_FUN_00519920
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00519ff0
        ;   Label: core_mirror.cpp_FUN_00519ff0
    PUSH EDI                            ; 00519ff1
    PUSH EBP                            ; 00519ff2
    SUB ESP,0x3c                        ; 00519ff3
    MOV EAX,dword ptr [ESP + 0x50]      ; 00519ff6
    MOV EBP,ESI                         ; 00519ffa
    LEA EBX,[ESP + 0x24]                ; 00519ffc
    FILD dword ptr [EAX]                ; 0051a000
    FMUL float ptr [0x00603ce8]         ; 0051a002 | DAT_00603ce8
    FSTP float ptr [EBX]                ; 0051a008
    FILD dword ptr [EAX + 0x4]          ; 0051a00a
    FMUL float ptr [0x00603ce8]         ; 0051a00d | DAT_00603ce8
    FSTP float ptr [EBX + 0x4]          ; 0051a013
    FILD dword ptr [EAX + 0x8]          ; 0051a016
    FMUL float ptr [0x00603ce8]         ; 0051a019 | DAT_00603ce8
    FSTP float ptr [EBX + 0x8]          ; 0051a01f
    LEA EAX,[ESP + 0x24]                ; 0051a022
    PUSH EAX                            ; 0051a026
    MOV EDX,dword ptr [ESP + 0x50]      ; 0051a027
    LEA ESI,[ESP + 0x34]                ; 0051a02b
    PUSH EDX                            ; 0051a02f
    LEA EDI,[ESP + 0x14]                ; 0051a030
    LEA EBX,[ESP + 0x8]                 ; 0051a034
    CALL core_mirror.cpp_FUN_00519920   ; 0051a038
        ;   XREF to: 00519920 (UNCONDITIONAL_CALL)  ; undefined core_mirror.cpp_FUN_00519920()
    LEA ESI,[ESP + 0x38]                ; 0051a03d
    ADD ESP,0x8                         ; 0051a041
    LEA EAX,[ESP + 0xc]                 ; 0051a044
    MOVSD ES:EDI,ESI                    ; 0051a048
    MOVSD ES:EDI,ESI                    ; 0051a049
    MOVSD ES:EDI,ESI                    ; 0051a04a
    CMP EBX,EAX                         ; 0051a04b
    JZ 0x0051a066                       ; 0051a04d
        ;   XREF to: 0051a066 (CONDITIONAL_JUMP)  ; LAB_0051a066
    MOV EAX,dword ptr [ESP + 0xc]       ; 0051a04f
    MOV dword ptr [ESP],EAX             ; 0051a053
    MOV EAX,dword ptr [ESP + 0x10]      ; 0051a056
    MOV dword ptr [ESP + 0x4],EAX       ; 0051a05a
    MOV EAX,dword ptr [ESP + 0x14]      ; 0051a05e
    MOV dword ptr [ESP + 0x8],EAX       ; 0051a062
    LEA EBX,[ESP + 0x18]                ; 0051a066
        ;   Label: LAB_0051a066
    MOV EAX,ESP                         ; 0051a06a
    LEA ESI,[ESP + 0x18]                ; 0051a06c
    MOV EDI,EBP                         ; 0051a070
    FLD float ptr [EAX]                 ; 0051a072
    FMUL float ptr [0x00603ce0]         ; 0051a074 | DAT_00603ce0
    FISTP dword ptr [EBX]               ; 0051a07a
    FLD float ptr [EAX + 0x4]           ; 0051a07c
    FMUL float ptr [0x00603ce0]         ; 0051a07f | DAT_00603ce0
    FISTP dword ptr [EBX + 0x4]         ; 0051a085
    FLD float ptr [EAX + 0x8]           ; 0051a088
    FMUL float ptr [0x00603ce0]         ; 0051a08b | DAT_00603ce0
    FISTP dword ptr [EBX + 0x8]         ; 0051a091
    MOVSD ES:EDI,ESI                    ; 0051a094
    MOVSD ES:EDI,ESI                    ; 0051a095
    MOVSD ES:EDI,ESI                    ; 0051a096
    MOV EAX,EBP                         ; 0051a097
    ADD ESP,0x3c                        ; 0051a099
    POP EBP                             ; 0051a09c
    POP EDI                             ; 0051a09d
    POP EBX                             ; 0051a09e
    RET                                 ; 0051a09f

