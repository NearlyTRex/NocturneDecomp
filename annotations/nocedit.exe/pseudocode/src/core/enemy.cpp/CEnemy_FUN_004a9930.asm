; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_enemy_cpp_CEnemy_FUN_004a9930(CEnemy *this_ptr)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x20]:1  local_20
;
; XREF[1]:
;   core_boneguy.cpp_CBoneGuy_process_FUN_0041bf90 at 0041c803
;
; Referenced Globals:
;   double DOUBLE_0062439a = 1.20000000000000
;   double DOUBLE_006243a2 = 0.25
;   CGore* g_CGorePtr = 02d83364
;   CGore g_CGoreInstance
;
; Called Functions:
;   core_gore.cpp_CGore_spawnBloodBurst_FUN_004edbb0
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9930
        ;   Label: core_enemy.cpp_CEnemy_FUN_004a9930
    PUSH ESI                            ; 004a9931
    PUSH EDI                            ; 004a9932
    PUSH EBP                            ; 004a9933
    MOV EBP,ESP                         ; 004a9934
    SUB ESP,0x18                        ; 004a9936
    AND ESP,0xfffffff8                  ; 004a9939
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a993c
    MOV EDX,dword ptr [EAX + 0xbe3c]    ; 004a993f
    TEST EDX,EDX                        ; 004a9945
    JNZ 0x004a9952                      ; 004a9947
        ;   XREF to: 004a9952 (CONDITIONAL_JUMP)  ; LAB_004a9952
    XOR EAX,EAX                         ; 004a9949
        ;   Label: LAB_004a9949
    MOV ESP,EBP                         ; 004a994b
    POP EBP                             ; 004a994d
    POP EDI                             ; 004a994e
    POP ESI                             ; 004a994f
    POP EBX                             ; 004a9950
    RET                                 ; 004a9951
    LEA ECX,[ESP + 0x8]                 ; 004a9952
        ;   Label: LAB_004a9952
    PUSH ECX                            ; 004a9956
    MOV ECX,dword ptr [EBP + 0x20]      ; 004a9957
    PUSH ECX                            ; 004a995a
    MOV EBX,dword ptr [EBP + 0x1c]      ; 004a995b
    PUSH EBX                            ; 004a995e
    MOV ESI,dword ptr [EBP + 0x18]      ; 004a995f
    PUSH ESI                            ; 004a9962
    MOV EAX,EDX                         ; 004a9963
    MOV EDX,dword ptr [EDX + 0x154]     ; 004a9965
    PUSH EAX                            ; 004a996b
    CALL dword ptr [EDX + 0x118]        ; 004a996c
    ADD ESP,0x14                        ; 004a9972
    MOV EAX,dword ptr [EBP + 0x20]      ; 004a9975
    FLDZ                                ; 004a9978
    FLD float ptr [EAX + 0x4]           ; 004a997a
    FSTP double ptr [ESP]               ; 004a997d
    FCOMP double ptr [ESP]              ; 004a9980
    FNSTSW AX                           ; 004a9983
    SAHF                                ; 004a9985
    JNC 0x004a9949                      ; 004a9986
        ;   XREF to: 004a9949 (CONDITIONAL_JUMP)  ; LAB_004a9949
    FLD double ptr [ESP]                ; 004a9988
    FMUL double ptr [0x0062439a]        ; 004a998b | DOUBLE_0062439a
    FMUL double ptr [0x006243a2]        ; 004a9991 | DOUBLE_006243a2
    PUSH 0x0                            ; 004a9997
    CALL crt_math.c_round_FUN_005fe6b0  ; 004a9999
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x18]        ; 004a999e
    MOV EDI,dword ptr [ESP + 0x18]      ; 004a99a2
    PUSH EDI                            ; 004a99a6
    PUSH 0x0                            ; 004a99a7
    LEA EAX,[ESP + 0x14]                ; 004a99a9
    PUSH EAX                            ; 004a99ad
    MOV EAX,[0x0067b9a0]                ; 004a99ae | g_CGorePtr | g_CGoreInstance
    PUSH EAX                            ; 004a99b3 | g_CGoreInstance
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004edbb0 ; 004a99b4
        ;   XREF to: 004edbb0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004edbb0(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    MOV EAX,0x1                         ; 004a99b9
    ADD ESP,0x14                        ; 004a99be
    MOV ESP,EBP                         ; 004a99c1
    POP EBP                             ; 004a99c3
    POP EDI                             ; 004a99c4
    POP ESI                             ; 004a99c5
    POP EBX                             ; 004a99c6
    RET                                 ; 004a99c7

