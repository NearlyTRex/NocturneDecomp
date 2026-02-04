; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_waypoint_cpp_CWayPoint_FUN_005ebd40(CWayPoint *this_ptr)
;
; Parameters:
; CWayPoint *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x30]:1  local_30
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[2]:
;   core_waypoint.cpp_CWayPoint_FUN_005ec320 at 005ec340
;   core_waypoint.cpp_CWayPoint_FUN_005ec4f0 at 005ec5a4
;
; Referenced Globals:
;   double DOUBLE_00657507 = 10
;   double DOUBLE_0065750f = 30
;   double DOUBLE_00657517 = 8
;   double DOUBLE_0065751f = 25
;
; Called Functions:
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00
;   core_path.cpp_FUN_00548500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ebd40
        ;   Label: core_waypoint.cpp_CWayPoint_FUN_005ebd40
    PUSH EBP                            ; 005ebd41
    MOV EBP,ESP                         ; 005ebd42
    SUB ESP,0x24                        ; 005ebd44
    AND ESP,0xfffffff8                  ; 005ebd47
    MOV EDX,dword ptr [EBP + 0xc]       ; 005ebd4a
    MOV ECX,dword ptr [EBP + 0x10]      ; 005ebd4d
    FLD float ptr [EDX]                 ; 005ebd50
    FSUB float ptr [ECX]                ; 005ebd52
    FSTP float ptr [ESP + 0xc]          ; 005ebd54
    FLD float ptr [EDX + 0x4]           ; 005ebd58
    FSUB float ptr [ECX + 0x4]          ; 005ebd5b
    FSTP float ptr [ESP + 0x10]         ; 005ebd5e
    FLD float ptr [EDX + 0x8]           ; 005ebd62
    FSUB float ptr [ECX + 0x8]          ; 005ebd65
    MOV EBX,dword ptr [EBP + 0x14]      ; 005ebd68
    FSTP float ptr [ESP + 0x14]         ; 005ebd6b
    TEST EBX,EBX                        ; 005ebd6f
    JZ 0x005ebdad                       ; 005ebd71
        ;   XREF to: 005ebdad (CONDITIONAL_JUMP)  ; LAB_005ebdad
    FLD float ptr [ESP + 0x10]          ; 005ebd73
    FABS                                ; 005ebd77
    FCOMP double ptr [0x00657517]       ; 005ebd79 | DOUBLE_00657517
    FNSTSW AX                           ; 005ebd7f
    SAHF                                ; 005ebd81
    JA 0x005ebda6                       ; 005ebd82
        ;   XREF to: 005ebda6 (CONDITIONAL_JUMP)  ; LAB_005ebda6
    FLD float ptr [ESP + 0xc]           ; 005ebd84
    FABS                                ; 005ebd88
    FCOMP double ptr [0x0065751f]       ; 005ebd8a | DOUBLE_0065751f
    FNSTSW AX                           ; 005ebd90
    SAHF                                ; 005ebd92
    JA 0x005ebda6                       ; 005ebd93
        ;   XREF to: 005ebda6 (CONDITIONAL_JUMP)  ; LAB_005ebda6
    FLD float ptr [ESP + 0x14]          ; 005ebd95
    FABS                                ; 005ebd99
    FCOMP double ptr [0x0065751f]       ; 005ebd9b | DOUBLE_0065751f
    FNSTSW AX                           ; 005ebda1
    SAHF                                ; 005ebda3
    JBE 0x005ebde7                      ; 005ebda4
        ;   XREF to: 005ebde7 (CONDITIONAL_JUMP)  ; LAB_005ebde7
    XOR EAX,EAX                         ; 005ebda6
        ;   Label: LAB_005ebda6
    MOV ESP,EBP                         ; 005ebda8
    POP EBP                             ; 005ebdaa
    POP EBX                             ; 005ebdab
    RET                                 ; 005ebdac
    FLD float ptr [ESP + 0x10]          ; 005ebdad
        ;   Label: LAB_005ebdad
    FABS                                ; 005ebdb1
    FCOMP double ptr [0x00657507]       ; 005ebdb3 | DOUBLE_00657507
    FNSTSW AX                           ; 005ebdb9
    SAHF                                ; 005ebdbb
    JA 0x005ebda6                       ; 005ebdbc
        ;   XREF to: 005ebda6 (CONDITIONAL_JUMP)  ; LAB_005ebda6
    FLD float ptr [ESP + 0xc]           ; 005ebdbe
    FABS                                ; 005ebdc2
    FCOMP double ptr [0x0065750f]       ; 005ebdc4 | DOUBLE_0065750f
    FNSTSW AX                           ; 005ebdca
    SAHF                                ; 005ebdcc
    JA 0x005ebda6                       ; 005ebdcd
        ;   XREF to: 005ebda6 (CONDITIONAL_JUMP)  ; LAB_005ebda6
    FLD float ptr [ESP + 0x14]          ; 005ebdcf
    FABS                                ; 005ebdd3
    FCOMP double ptr [0x0065750f]       ; 005ebdd5 | DOUBLE_0065750f
    FNSTSW AX                           ; 005ebddb
    SAHF                                ; 005ebddd
    JBE 0x005ebde7                      ; 005ebdde
        ;   XREF to: 005ebde7 (CONDITIONAL_JUMP)  ; LAB_005ebde7
    XOR EAX,EAX                         ; 005ebde0
    MOV ESP,EBP                         ; 005ebde2
    POP EBP                             ; 005ebde4
    POP EBX                             ; 005ebde5
    RET                                 ; 005ebde6
    MOV EAX,dword ptr [EDX]             ; 005ebde7
        ;   Label: LAB_005ebde7
    MOV dword ptr [ESP + 0x18],EAX      ; 005ebde9
    LEA EAX,[EDX + 0x4]                 ; 005ebded
    MOV EAX,dword ptr [EAX]             ; 005ebdf0
    MOV dword ptr [ESP + 0x1c],EAX      ; 005ebdf2
    LEA EAX,[EDX + 0x8]                 ; 005ebdf6
    MOV EAX,dword ptr [EAX]             ; 005ebdf9
    PUSH ECX                            ; 005ebdfb
    MOV dword ptr [ESP + 0x24],EAX      ; 005ebdfc
    CALL core_path.cpp_FUN_00548500     ; 005ebe00
        ;   XREF to: 00548500 (UNCONDITIONAL_CALL)  ; void core_path.cpp_FUN_00548500()
    ADD ESP,0x4                         ; 005ebe05
    PUSH 0x0                            ; 005ebe08
    LEA EDX,[ESP + 0x4]                 ; 005ebe0a
    PUSH EDX                            ; 005ebe0e
    LEA EDX,[ESP + 0x20]                ; 005ebe0f
    PUSH EDX                            ; 005ebe13
    PUSH EAX                            ; 005ebe14
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00 ; 005ebe15
        ;   XREF to: 00547d00 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
    ADD ESP,0x10                        ; 005ebe1a
    CMP EAX,0x1                         ; 005ebe1d
    SETZ AL                             ; 005ebe20
    AND EAX,0xff                        ; 005ebe23
    MOV ESP,EBP                         ; 005ebe28
    POP EBP                             ; 005ebe2a
    POP EBX                             ; 005ebe2b
    RET                                 ; 005ebe2c

