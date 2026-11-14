; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_enemy_cpp_CEnemy_getTargetPoints_FUN_00488020(CEnemy *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
; Local Variables:
; undefined        Stack[-0x78]:1  local_78
; undefined        Stack[-0x60]:1  local_60
;
; XREF[2]:
;   core_confzomb.cpp_CConfederateZombie_getTargetPoints_FUN_005a2600 at 005a261e
;   core_unionzom.cpp_CUnionZombie_getTargetPoints_FUN_005a46e0 at 005a46fe
;
; Referenced Globals:
;   undefined4 DAT_005d2d9d
;   undefined4 DAT_005d2da1
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00488020
        ;   Label: core_enemy.cpp_CEnemy_getTargetPoints_FUN_00488020
    PUSH ESI                            ; 00488021
    PUSH EDI                            ; 00488022
    PUSH EBP                            ; 00488023
    MOV EBP,ESP                         ; 00488024
    SUB ESP,0x68                        ; 00488026
    AND ESP,0xfffffff8                  ; 00488029
    MOV ESI,dword ptr [EBP + 0x14]      ; 0048802c
    MOV EBX,dword ptr [EBP + 0x18]      ; 0048802f
    PUSH ESI                            ; 00488032
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 00488033
    LEA ESI,[ESP + 0x4]                 ; 00488039
    LEA EDI,[ESP + 0x1c]                ; 0048803d
    CALL dword ptr [EAX + 0x24]         ; 00488041
    MOV ECX,0x6                         ; 00488044
    LEA ESI,[ESP + 0x4]                 ; 00488049
    ADD ESP,0x4                         ; 0048804d
    MOVSD.REP ES:EDI,ESI                ; 00488050
    FLD float ptr [ESP + 0x28]          ; 00488052
    FSUB float ptr [ESP + 0x1c]         ; 00488056
    FMUL double ptr [0x005d2da1]        ; 0048805a | DAT_005d2da1
    FLD float ptr [ESP + 0x18]          ; 00488060
    FLD float ptr [ESP + 0x1c]          ; 00488064
    FLD float ptr [ESP + 0x20]          ; 00488068
    LEA EDI,[ESP + 0x54]                ; 0048806c
    LEA ESI,[ESP + 0x48]                ; 00488070
    FXCH ST2                            ; 00488074
    FADD float ptr [ESP + 0x24]         ; 00488076
    FXCH                                ; 0048807a
    FADD float ptr [ESP + 0x28]         ; 0048807c
    FXCH ST2                            ; 00488080
    FADD float ptr [ESP + 0x2c]         ; 00488082
    FXCH                                ; 00488086
    FSTP float ptr [ESP + 0x48]         ; 00488088
    FXCH                                ; 0048808c
    FSTP float ptr [ESP + 0x4c]         ; 0048808e
    FSTP float ptr [ESP + 0x50]         ; 00488092
    MOVSD ES:EDI,ESI                    ; 00488096
    MOVSD ES:EDI,ESI                    ; 00488097
    MOVSD ES:EDI,ESI                    ; 00488098
    FLD float ptr [0x005d2d9d]          ; 00488099 | DAT_005d2d9d
    FLD float ptr [ESP + 0x54]          ; 0048809f
    FMUL ST1                            ; 004880a3
    FLD float ptr [ESP + 0x58]          ; 004880a5
    FMUL ST2                            ; 004880a9
    FLD float ptr [ESP + 0x5c]          ; 004880ab
    FMULP ST3                           ; 004880af
    LEA EDI,[ESP + 0x3c]                ; 004880b1
    LEA ESI,[ESP + 0x30]                ; 004880b5
    FXCH                                ; 004880b9
    FSTP float ptr [ESP + 0x30]         ; 004880bb
    FSTP float ptr [ESP + 0x34]         ; 004880bf
    FSTP float ptr [ESP + 0x38]         ; 004880c3
    MOVSD ES:EDI,ESI                    ; 004880c7
    MOVSD ES:EDI,ESI                    ; 004880c8
    MOVSD ES:EDI,ESI                    ; 004880c9
    FLD float ptr [ESP + 0x40]          ; 004880ca
    FXCH                                ; 004880ce
    FADD ST0,ST1                        ; 004880d0
    LEA EAX,[ESP + 0x3c]                ; 004880d2
    FSTP ST1                            ; 004880d6
    FSTP float ptr [ESP + 0x40]         ; 004880d8
    CMP EBX,EAX                         ; 004880dc
    JNZ 0x004880ec                      ; 004880de
        ;   XREF to: 004880ec (CONDITIONAL_JUMP)  ; LAB_004880ec
    MOV EAX,0x1                         ; 004880e0
    MOV ESP,EBP                         ; 004880e5
    POP EBP                             ; 004880e7
    POP EDI                             ; 004880e8
    POP ESI                             ; 004880e9
    POP EBX                             ; 004880ea
    RET                                 ; 004880eb
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004880ec
        ;   Label: LAB_004880ec
    MOV dword ptr [EBX],EAX             ; 004880f0
    MOV EAX,dword ptr [ESP + 0x40]      ; 004880f2
    MOV dword ptr [EBX + 0x4],EAX       ; 004880f6
    MOV EAX,dword ptr [ESP + 0x44]      ; 004880f9
    MOV dword ptr [EBX + 0x8],EAX       ; 004880fd
    MOV EAX,0x1                         ; 00488100
    MOV ESP,EBP                         ; 00488105
    POP EBP                             ; 00488107
    POP EDI                             ; 00488108
    POP ESI                             ; 00488109
    POP EBX                             ; 0048810a
    RET                                 ; 0048810b

