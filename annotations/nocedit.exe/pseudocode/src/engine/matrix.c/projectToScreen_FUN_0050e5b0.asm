; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int engine_matrix.c_projectToScreen_FUN_0050e5b0(int input_value)
;
; Parameters:
; int              Stack[0x4]:4   input_value
; Local Variables:
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined        Stack[-0x44]:1  local_44
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   int g_ProjectionScale = 0x10000
;   int g_ViewportCenterYFixed
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   engine_matrix.c_transformWorldToView_FUN_0050cc40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050e5b0
        ;   Label: engine_matrix.c_projectToScreen_FUN_0050e5b0
    PUSH ESI                            ; 0050e5b1
    PUSH EDI                            ; 0050e5b2
    PUSH EBP                            ; 0050e5b3
    MOV EBP,ESP                         ; 0050e5b4
    SUB ESP,0x3c                        ; 0050e5b6
    AND ESP,0xfffffff8                  ; 0050e5b9
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050e5bc
    LEA ESI,[ESP + 0xc]                 ; 0050e5bf
    MOV EDI,ESP                         ; 0050e5c3
    MOV dword ptr [ESP + 0x4],EAX       ; 0050e5c5
    MOV EAX,ESP                         ; 0050e5c9
    XOR EDX,EDX                         ; 0050e5cb
    PUSH EAX                            ; 0050e5cd
    MOV dword ptr [ESP + 0x4],EDX       ; 0050e5ce
    MOV dword ptr [ESP + 0xc],EDX       ; 0050e5d2
    CALL engine_matrix.c_transformWorldToView_FUN_0050cc40 ; 0050e5d6
        ;   XREF to: 0050cc40 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformWorldToView_FUN_0050cc40(CVector3i * input_coords, CVector3i * output_coords)
    LEA ESI,[ESP + 0x10]                ; 0050e5db
    ADD ESP,0x4                         ; 0050e5df
    MOVSD ES:EDI,ESI                    ; 0050e5e2
    MOVSD ES:EDI,ESI                    ; 0050e5e3
    MOVSD ES:EDI,ESI                    ; 0050e5e4
    MOV EBX,dword ptr [ESP + 0x8]       ; 0050e5e5
    TEST EBX,EBX                        ; 0050e5e9
    JLE 0x0050e628                      ; 0050e5eb
        ;   XREF to: 0050e628 (CONDITIONAL_JUMP)  ; LAB_0050e628
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050e5ed
    FILD dword ptr [0x02d0254c]         ; 0050e5f0 | g_ViewportCenterYFixed
    MOV dword ptr [ESP + 0x34],EAX      ; 0050e5f6
    MOV dword ptr [ESP + 0x38],EBX      ; 0050e5fa
    FILD dword ptr [ESP + 0x34]         ; 0050e5fe
    FCHS                                ; 0050e602
    FMULP                               ; 0050e604
    FILD dword ptr [ESP + 0x38]         ; 0050e606
    FDIVP                               ; 0050e60a
    FILD dword ptr [0x006793c0]         ; 0050e60c | g_ProjectionScale
    FDIVP                               ; 0050e612
    CALL crt_math.c_round_FUN_005fe6b0  ; 0050e614
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x30]        ; 0050e619
    MOV EAX,dword ptr [ESP + 0x30]      ; 0050e61d
    MOV ESP,EBP                         ; 0050e621
    POP EBP                             ; 0050e623
    POP EDI                             ; 0050e624
    POP ESI                             ; 0050e625
    POP EBX                             ; 0050e626
    RET                                 ; 0050e627
    MOV dword ptr [ESP + 0x30],0xffffffff ; 0050e628
        ;   Label: LAB_0050e628
    MOV EAX,dword ptr [ESP + 0x30]      ; 0050e630
    MOV ESP,EBP                         ; 0050e634
    POP EBP                             ; 0050e636
    POP EDI                             ; 0050e637
    POP ESI                             ; 0050e638
    POP EBX                             ; 0050e639
    RET                                 ; 0050e63a

