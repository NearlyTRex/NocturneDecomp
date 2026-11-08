; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_0041e100(float *param_1)
;
; Local Variables:
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
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
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0054af10 at 0054af53
;
; Referenced Globals:
;   undefined4 DAT_005b74ad
;   undefined4 DAT_005b74b1
;   undefined4 DAT_005dc948
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005fba44
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01c6b59c
;
; Called Functions:
;   FUN_005632a3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041e100
        ;   Label: FUN_0041e100
    PUSH ESI                            ; 0041e101
    PUSH EDI                            ; 0041e102
    PUSH EBP                            ; 0041e103
    MOV EBP,ESP                         ; 0041e104
    SUB ESP,0x48                        ; 0041e106
    AND ESP,0xfffffff8                  ; 0041e109
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041e10c
    MOV EDX,EAX                         ; 0041e10f
    LEA EDI,[ESP + 0x24]                ; 0041e111
    LEA ESI,[ESP + 0x18]                ; 0041e115
    FLD float ptr [EDX]                 ; 0041e119
    FLD float ptr [EDX + 0x4]           ; 0041e11b
    FLD float ptr [EDX + 0x8]           ; 0041e11e
    FXCH ST2                            ; 0041e121
    FADD float ptr [EAX + 0xc]          ; 0041e123
    FXCH                                ; 0041e126
    FADD float ptr [EAX + 0x10]         ; 0041e128
    FXCH ST2                            ; 0041e12b
    FADD float ptr [EAX + 0x14]         ; 0041e12d
    FXCH                                ; 0041e130
    FSTP float ptr [ESP + 0x18]         ; 0041e132
    FXCH                                ; 0041e136
    FSTP float ptr [ESP + 0x1c]         ; 0041e138
    FSTP float ptr [ESP + 0x20]         ; 0041e13c
    MOVSD ES:EDI,ESI                    ; 0041e140
    MOVSD ES:EDI,ESI                    ; 0041e141
    MOVSD ES:EDI,ESI                    ; 0041e142
    FLD float ptr [0x005b74ad]          ; 0041e143 | DAT_005b74ad
    FLD float ptr [ESP + 0x24]          ; 0041e149
    FMUL ST1                            ; 0041e14d
    FLD float ptr [ESP + 0x28]          ; 0041e14f
    FMUL ST2                            ; 0041e153
    FLD float ptr [ESP + 0x2c]          ; 0041e155
    FMULP ST3                           ; 0041e159
    LEA EBX,[ESP + 0x30]                ; 0041e15b
    MOV EDX,dword ptr [0x005f2afc]      ; 0041e15f | DAT_005f2afc
    MOV EAX,ESP                         ; 0041e165
    MOV EDI,ESP                         ; 0041e167
    LEA ESI,[ESP + 0xc]                 ; 0041e169
    FXCH                                ; 0041e16d
    FSTP float ptr [ESP + 0xc]          ; 0041e16f
    FSTP float ptr [ESP + 0x10]         ; 0041e173
    FSTP float ptr [ESP + 0x14]         ; 0041e177
    MOVSD ES:EDI,ESI                    ; 0041e17b
    MOVSD ES:EDI,ESI                    ; 0041e17c
    MOVSD ES:EDI,ESI                    ; 0041e17d
    FLD float ptr [EAX]                 ; 0041e17e
    FMUL float ptr [0x005dc948]         ; 0041e180 | DAT_005dc948
    FISTP dword ptr [EBX]               ; 0041e186
    FLD float ptr [EAX + 0x4]           ; 0041e188
    FMUL float ptr [0x005dc948]         ; 0041e18b | DAT_005dc948
    FISTP dword ptr [EBX + 0x4]         ; 0041e191
    FLD float ptr [EAX + 0x8]           ; 0041e194
    FMUL float ptr [0x005dc948]         ; 0041e197 | DAT_005dc948
    FISTP dword ptr [EBX + 0x8]         ; 0041e19d
    LEA EAX,[ESP + 0x30]                ; 0041e1a0
    PUSH EAX                            ; 0041e1a4
    MOV EAX,dword ptr [EDX]             ; 0041e1a5 | DAT_01bdd7e4
    ADD EAX,0x124f50                    ; 0041e1a7
    PUSH EAX                            ; 0041e1ac
    CALL FUN_005632a3                   ; 0041e1ad
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; undefined FUN_005632a3()
    MOV EAX,[0x005f2afc]                ; 0041e1b2 | DAT_005f2afc
    MOV EAX,dword ptr [EAX]             ; 0041e1b7 | DAT_01bdd7e4
    MOV EAX,dword ptr [EAX + 0x124f58]  ; 0041e1b9
    ADD ESP,0x8                         ; 0041e1bf
    TEST EAX,EAX                        ; 0041e1c2
    JLE 0x0041e208                      ; 0041e1c4
        ;   XREF to: 0041e208 (CONDITIONAL_JUMP)  ; LAB_0041e208
    MOV EDX,dword ptr [EBP + 0x14]      ; 0041e1c6
    FLD float ptr [EDX + 0x10]          ; 0041e1c9
    FSUB float ptr [EDX + 0x4]          ; 0041e1cc
    MOV dword ptr [ESP + 0x44],EAX      ; 0041e1cf
    FILD dword ptr [ESP + 0x44]         ; 0041e1d3
    FMUL double ptr [0x005b74b1]        ; 0041e1d7 | DAT_005b74b1
    FDIVP                               ; 0041e1dd
    FILD dword ptr [0x01c6b59c]         ; 0041e1df | DAT_01c6b59c
    FMULP                               ; 0041e1e5
    FILD dword ptr [0x005fba44]         ; 0041e1e7 | DAT_005fba44
    FDIVP                               ; 0041e1ed
    FABS                                ; 0041e1ef
    FSTP float ptr [ESP + 0x3c]         ; 0041e1f1
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0041e1f5
    MOV dword ptr [ESP + 0x40],EAX      ; 0041e1f9
    MOV EAX,dword ptr [ESP + 0x40]      ; 0041e1fd
    MOV ESP,EBP                         ; 0041e201
    POP EBP                             ; 0041e203
    POP EDI                             ; 0041e204
    POP ESI                             ; 0041e205
    POP EBX                             ; 0041e206
    RET                                 ; 0041e207
    MOV dword ptr [ESP + 0x40],0x47c34f80 ; 0041e208
        ;   Label: LAB_0041e208
    MOV EAX,dword ptr [ESP + 0x40]      ; 0041e210
    MOV ESP,EBP                         ; 0041e214
    POP EBP                             ; 0041e216
    POP EDI                             ; 0041e217
    POP ESI                             ; 0041e218
    POP EBX                             ; 0041e219
    RET                                 ; 0041e21a

