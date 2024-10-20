# Iron Fury_DirectX9_Team
DirectX9 아이언 퓨리 모작 팀 프로젝트

영상 링크 : https://youtu.be/rfMFkQAeNzk?feature=shared
인원 : 4명
역할 : 플레이어, 파티클, 충돌 처리, 스프라이트 애니메이션

[ 작업 내용 ]

- Client
   - PlayerActor(스킬, 무기, 아이템 부분은 다른 팀원이 구현했습니다.)
 
- Engine
   - CollisionManager -> IntersectCubeToCube
   - CollisionManager -> IntersectRayToActor
   - CollisionManager -> IntersectRayToCollider
   - AnimationComponent
   - EffectComponent
   - ParticleComponent
