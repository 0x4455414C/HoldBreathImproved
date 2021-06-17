modded class StaminaHandler
{

   override protected void RegisterStaminaModifiers()
	{
		//! stamina modifiers registration
		m_StaminaModifiers = new StaminaModifiers;

      //* STAMINA EXP */
      // m_StaminaModifiers.RegisterExponential(EStaminaModifiers.HOLD_BREATH, GameConstants.STAMINA_DRAIN_HOLD_BREATH_START, GameConstants.STAMINA_DRAIN_HOLD_BREATH_EXPONENT,0,GameConstants.STAMINA_DRAIN_HOLD_BREATH_DURATION);
      //* STAMINA LINEAR */
      // m_StaminaModifiers.RegisterLinear(EStaminaModifiers.HOLD_BREATH,GameConstants.STAMINA_DRAIN_HOLD_BREATH_START,GameConstants.STAMINA_DRAIN_HOLD_BREATH_END,0,GameConstants.STAMINA_DRAIN_HOLD_BREATH_DURATION);
      //* STAMINA FIXED */
		m_StaminaModifiers.RegisterFixed(EStaminaModifiers.HOLD_BREATH, GameConstants.STAMINA_DRAIN_HOLD_BREATH );
      //*! DO NOT REMOVE */
		m_StaminaModifiers.RegisterFixed(EStaminaModifiers.JUMP, GameConstants.STAMINA_DRAIN_JUMP);
		m_StaminaModifiers.RegisterFixed(EStaminaModifiers.VAULT, GameConstants.STAMINA_DRAIN_VAULT);
		m_StaminaModifiers.RegisterFixed(EStaminaModifiers.CLIMB, GameConstants.STAMINA_DRAIN_CLIMB);
		m_StaminaModifiers.RegisterFixed(EStaminaModifiers.MELEE_LIGHT, GameConstants.STAMINA_DRAIN_MELEE_LIGHT);
		m_StaminaModifiers.RegisterFixed(EStaminaModifiers.MELEE_HEAVY, GameConstants.STAMINA_DRAIN_MELEE_HEAVY);
		m_StaminaModifiers.RegisterFixed(EStaminaModifiers.OVERALL_DRAIN, GameConstants.STAMINA_MAX, 5.0);
		m_StaminaModifiers.RegisterRandomized(EStaminaModifiers.MELEE_EVADE, 3, GameConstants.STAMINA_DRAIN_MELEE_EVADE);
		m_StaminaModifiers.RegisterFixed(EStaminaModifiers.ROLL, GameConstants.STAMINA_DRAIN_ROLL);
	}	
}

