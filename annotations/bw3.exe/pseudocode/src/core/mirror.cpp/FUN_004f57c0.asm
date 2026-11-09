; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_mirror_cpp_FUN_004f57c0(undefined4 param_1,int *param_2)
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
;   core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_00537e20 at 00537fa5
;
; Referenced Globals:
;   undefined4 DAT_005e29c0
;   undefined4 DAT_005e29c8
;
; Called Functions:
;   core_mirror.cpp_FUN_004f50f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f57c0
        ;   Label: core_mirror.cpp_FUN_004f57c0
    PUSH EDI                            ; 004f57c1
    PUSH EBP                            ; 004f57c2
    SUB ESP,0x3c                        ; 004f57c3
    MOV EAX,dword ptr [ESP + 0x50]      ; 004f57c6
    MOV EBP,ESI                         ; 004f57ca
    LEA EBX,[ESP + 0x24]                ; 004f57cc
    FILD dword ptr [EAX]                ; 004f57d0
    FMUL float ptr [0x005e29c8]         ; 004f57d2 | DAT_005e29c8
    FSTP float ptr [EBX]                ; 004f57d8
    FILD dword ptr [EAX + 0x4]          ; 004f57da
    FMUL float ptr [0x005e29c8]         ; 004f57dd | DAT_005e29c8
    FSTP float ptr [EBX + 0x4]          ; 004f57e3
    FILD dword ptr [EAX + 0x8]          ; 004f57e6
    FMUL float ptr [0x005e29c8]         ; 004f57e9 | DAT_005e29c8
    FSTP float ptr [EBX + 0x8]          ; 004f57ef
    LEA EAX,[ESP + 0x24]                ; 004f57f2
    PUSH EAX                            ; 004f57f6
    MOV EDX,dword ptr [ESP + 0x50]      ; 004f57f7
    LEA ESI,[ESP + 0x34]                ; 004f57fb
    PUSH EDX                            ; 004f57ff
    LEA EDI,[ESP + 0x14]                ; 004f5800
    LEA EBX,[ESP + 0x8]                 ; 004f5804
    CALL core_mirror.cpp_FUN_004f50f0   ; 004f5808
        ;   XREF to: 004f50f0 (UNCONDITIONAL_CALL)  ; undefined core_mirror.cpp_FUN_004f50f0()
    LEA ESI,[ESP + 0x38]                ; 004f580d
    ADD ESP,0x8                         ; 004f5811
    LEA EAX,[ESP + 0xc]                 ; 004f5814
    MOVSD ES:EDI,ESI                    ; 004f5818
    MOVSD ES:EDI,ESI                    ; 004f5819
    MOVSD ES:EDI,ESI                    ; 004f581a
    CMP EBX,EAX                         ; 004f581b
    JZ 0x004f5836                       ; 004f581d
        ;   XREF to: 004f5836 (CONDITIONAL_JUMP)  ; LAB_004f5836
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f581f
    MOV dword ptr [ESP],EAX             ; 004f5823
    MOV EAX,dword ptr [ESP + 0x10]      ; 004f5826
    MOV dword ptr [ESP + 0x4],EAX       ; 004f582a
    MOV EAX,dword ptr [ESP + 0x14]      ; 004f582e
    MOV dword ptr [ESP + 0x8],EAX       ; 004f5832
    LEA EBX,[ESP + 0x18]                ; 004f5836
        ;   Label: LAB_004f5836
    MOV EAX,ESP                         ; 004f583a
    LEA ESI,[ESP + 0x18]                ; 004f583c
    MOV EDI,EBP                         ; 004f5840
    FLD float ptr [EAX]                 ; 004f5842
    FMUL float ptr [0x005e29c0]         ; 004f5844 | DAT_005e29c0
    FISTP dword ptr [EBX]               ; 004f584a
    FLD float ptr [EAX + 0x4]           ; 004f584c
    FMUL float ptr [0x005e29c0]         ; 004f584f | DAT_005e29c0
    FISTP dword ptr [EBX + 0x4]         ; 004f5855
    FLD float ptr [EAX + 0x8]           ; 004f5858
    FMUL float ptr [0x005e29c0]         ; 004f585b | DAT_005e29c0
    FISTP dword ptr [EBX + 0x8]         ; 004f5861
    MOVSD ES:EDI,ESI                    ; 004f5864
    MOVSD ES:EDI,ESI                    ; 004f5865
    MOVSD ES:EDI,ESI                    ; 004f5866
    MOV EAX,EBP                         ; 004f5867
    ADD ESP,0x3c                        ; 004f5869
    POP EBP                             ; 004f586c
    POP EDI                             ; 004f586d
    POP EBX                             ; 004f586e
    RET                                 ; 004f586f

